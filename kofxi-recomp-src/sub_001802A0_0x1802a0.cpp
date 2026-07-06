#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001802A0
// Address: 0x1802a0 - 0x180640
void sub_001802A0_0x1802a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001802A0_0x1802a0");
#endif

    switch (ctx->pc) {
        case 0x18040cu: goto label_18040c;
        case 0x18041cu: goto label_18041c;
        case 0x180448u: goto label_180448;
        case 0x18055cu: goto label_18055c;
        case 0x18058cu: goto label_18058c;
        default: break;
    }

    ctx->pc = 0x1802a0u;

    // 0x1802a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1802a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1802a4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1802a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1802a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1802a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1802ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1802acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1802b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1802b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1802b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1802b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1802b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1802b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1802bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1802bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1802c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1802c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1802c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1802c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1802c8: 0x8c830530  lw          $v1, 0x530($a0)
    ctx->pc = 0x1802c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x1802cc: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x1802ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1802d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1802d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1802d4: 0x28a10020  slti        $at, $a1, 0x20
    ctx->pc = 0x1802d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1802d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1802D8u;
    {
        const bool branch_taken_0x1802d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1802DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802D8u;
        // 0x1802dc: 0xac820530  sw          $v0, 0x530($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802d8) {
            ctx->pc = 0x1802E8u;
            goto label_1802e8;
        }
    }
    ctx->pc = 0x1802E0u;
    // 0x1802e0: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x1802E0u;
    {
        const bool branch_taken_0x1802e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1802E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802E0u;
        // 0x1802e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802e0) {
            ctx->pc = 0x18061Cu;
            goto label_18061c;
        }
    }
    ctx->pc = 0x1802E8u;
label_1802e8:
    // 0x1802e8: 0x28a20070  slti        $v0, $a1, 0x70
    ctx->pc = 0x1802e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)112) ? 1 : 0);
    // 0x1802ec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1802ECu;
    {
        const bool branch_taken_0x1802ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1802ec) {
            ctx->pc = 0x1802F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1802ECu;
            // 0x1802f0: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1802FCu;
            goto label_1802fc;
        }
    }
    ctx->pc = 0x1802F4u;
    // 0x1802f4: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1802F4u;
    {
        const bool branch_taken_0x1802f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1802F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802F4u;
        // 0x1802f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802f4) {
            ctx->pc = 0x18061Cu;
            goto label_18061c;
        }
    }
    ctx->pc = 0x1802FCu;
label_1802fc:
    // 0x1802fc: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x1802fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x180300: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x180300u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x180304: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x180304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180308: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x180308u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18030c: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x18030cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x180310: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x180310u;
    {
        const bool branch_taken_0x180310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180310) {
            ctx->pc = 0x180314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180310u;
            // 0x180314: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1803F8u;
            goto label_1803f8;
        }
    }
    ctx->pc = 0x180318u;
    // 0x180318: 0x2861000f  slti        $at, $v1, 0xF
    ctx->pc = 0x180318u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x18031c: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x18031Cu;
    {
        const bool branch_taken_0x18031c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18031c) {
            ctx->pc = 0x1803F4u;
            goto label_1803f4;
        }
    }
    ctx->pc = 0x180324u;
    // 0x180324: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x180324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x180328: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x180328u;
    {
        const bool branch_taken_0x180328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180328) {
            ctx->pc = 0x18032Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180328u;
            // 0x18032c: 0x8e440538  lw          $a0, 0x538($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180340u;
            goto label_180340;
        }
    }
    ctx->pc = 0x180330u;
    // 0x180330: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x180330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x180334: 0x5462002c  bnel        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x180334u;
    {
        const bool branch_taken_0x180334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x180334) {
            ctx->pc = 0x180338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180334u;
            // 0x180338: 0x2862000b  slti        $v0, $v1, 0xB (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1803E8u;
            goto label_1803e8;
        }
    }
    ctx->pc = 0x18033Cu;
    // 0x18033c: 0x8e440538  lw          $a0, 0x538($s2)
    ctx->pc = 0x18033cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1336)));
label_180340:
    // 0x180340: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x180340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x180344: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x180344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x180348: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x180348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18034c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x18034cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x180350: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x180350u;
    {
        const bool branch_taken_0x180350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180350) {
            ctx->pc = 0x180354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180350u;
            // 0x180354: 0x2622000c  addiu       $v0, $s1, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180394u;
            goto label_180394;
        }
    }
    ctx->pc = 0x180358u;
    // 0x180358: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x180358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18035c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18035Cu;
    {
        const bool branch_taken_0x18035c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18035c) {
            ctx->pc = 0x180390u;
            goto label_180390;
        }
    }
    ctx->pc = 0x180364u;
    // 0x180364: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x180364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x180368: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x180368u;
    {
        const bool branch_taken_0x180368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180368) {
            ctx->pc = 0x18036Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180368u;
            // 0x18036c: 0x26220009  addiu       $v0, $s1, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180388u;
            goto label_180388;
        }
    }
    ctx->pc = 0x180370u;
    // 0x180370: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x180370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180374: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180374u;
    {
        const bool branch_taken_0x180374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x180374) {
            ctx->pc = 0x180384u;
            goto label_180384;
        }
    }
    ctx->pc = 0x18037Cu;
    // 0x18037c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18037Cu;
    {
        const bool branch_taken_0x18037c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18037Cu;
        // 0x180380: 0x26220009  addiu       $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18037c) {
            ctx->pc = 0x18039Cu;
            goto label_18039c;
        }
    }
    ctx->pc = 0x180384u;
label_180384:
    // 0x180384: 0x26220009  addiu       $v0, $s1, 0x9
    ctx->pc = 0x180384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_180388:
    // 0x180388: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x180388u;
    {
        const bool branch_taken_0x180388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180388u;
        // 0x18038c: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180388) {
            ctx->pc = 0x1803A0u;
            goto label_1803a0;
        }
    }
    ctx->pc = 0x180390u;
label_180390:
    // 0x180390: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x180390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_180394:
    // 0x180394: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x180394u;
    {
        const bool branch_taken_0x180394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180394u;
        // 0x180398: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180394) {
            ctx->pc = 0x1803A0u;
            goto label_1803a0;
        }
    }
    ctx->pc = 0x18039Cu;
label_18039c:
    // 0x18039c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x18039cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1803a0:
    // 0x1803a0: 0x924304f0  lbu         $v1, 0x4F0($s2)
    ctx->pc = 0x1803a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1264)));
    // 0x1803a4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1803a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1803a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1803A8u;
    {
        const bool branch_taken_0x1803a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1803a8) {
            ctx->pc = 0x1803ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1803A8u;
            // 0x1803ac: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1803BCu;
            goto label_1803bc;
        }
    }
    ctx->pc = 0x1803B0u;
    // 0x1803b0: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x1803b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1803b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1803B4u;
    {
        const bool branch_taken_0x1803b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1803B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803B4u;
        // 0x1803b8: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803b4) {
            ctx->pc = 0x1803CCu;
            goto label_1803cc;
        }
    }
    ctx->pc = 0x1803BCu;
label_1803bc:
    // 0x1803bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1803BCu;
    {
        const bool branch_taken_0x1803bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1803bc) {
            ctx->pc = 0x1803CCu;
            goto label_1803cc;
        }
    }
    ctx->pc = 0x1803C4u;
    // 0x1803c4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1803c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1803c8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1803c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1803cc:
    // 0x1803cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1803ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1803d0: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x1803d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1803d4: 0x8c42b840  lw          $v0, -0x47C0($v0)
    ctx->pc = 0x1803d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948928)));
    // 0x1803d8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1803d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1803dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1803dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1803e0: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x1803E0u;
    {
        const bool branch_taken_0x1803e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1803E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803E0u;
        // 0x1803e4: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803e0) {
            ctx->pc = 0x18061Cu;
            goto label_18061c;
        }
    }
    ctx->pc = 0x1803E8u;
label_1803e8:
    // 0x1803e8: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1803E8u;
    {
        const bool branch_taken_0x1803e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1803e8) {
            ctx->pc = 0x1803ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1803E8u;
            // 0x1803ec: 0x64030002  daddiu      $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1803F4u;
            goto label_1803f4;
        }
    }
    ctx->pc = 0x1803F0u;
    // 0x1803f0: 0x64030005  daddiu      $v1, $zero, 0x5
    ctx->pc = 0x1803f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
label_1803f4:
    // 0x1803f4: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x1803f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1803f8:
    // 0x1803f8: 0x2a610005  slti        $at, $s3, 0x5
    ctx->pc = 0x1803f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1803fc: 0x50200054  beql        $at, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x1803FCu;
    {
        const bool branch_taken_0x1803fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1803fc) {
            ctx->pc = 0x180400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1803FCu;
            // 0x180400: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180550u;
            goto label_180550;
        }
    }
    ctx->pc = 0x180404u;
    // 0x180404: 0xc0cead0  jal         func_33AB40
    ctx->pc = 0x180404u;
    SET_GPR_U32(ctx, 31, 0x18040Cu);
    ctx->pc = 0x33AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB40u, 0x180404u, 0x18040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18040Cu;
label_18040c:
    // 0x18040c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18040cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180410: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x180410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180414: 0xc0cea6c  jal         func_33A9B0
    ctx->pc = 0x180414u;
    SET_GPR_U32(ctx, 31, 0x18041Cu);
    ctx->pc = 0x180418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180414u;
    // 0x180418: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A9B0u, 0x180414u, 0x18041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18041Cu;
label_18041c:
    // 0x18041c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x18041cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x180420: 0x2602fffd  addiu       $v0, $s0, -0x3
    ctx->pc = 0x180420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x180424: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x180424u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x180428: 0x50200019  beql        $at, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x180428u;
    {
        const bool branch_taken_0x180428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x180428) {
            ctx->pc = 0x18042Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180428u;
            // 0x18042c: 0x2604ffff  addiu       $a0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180490u;
            goto label_180490;
        }
    }
    ctx->pc = 0x180430u;
    // 0x180430: 0x8e430530  lw          $v1, 0x530($s2)
    ctx->pc = 0x180430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1328)));
    // 0x180434: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x180434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x180438: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x180438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18043c: 0xae420530  sw          $v0, 0x530($s2)
    ctx->pc = 0x18043cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1328), GPR_U32(ctx, 2));
    // 0x180440: 0xc062794  jal         func_189E50
    ctx->pc = 0x180440u;
    SET_GPR_U32(ctx, 31, 0x180448u);
    ctx->pc = 0x180444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180440u;
    // 0x180444: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189E50u, 0x180440u, 0x180448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180448u;
label_180448:
    // 0x180448: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x180448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18044c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18044cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x180450: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x180450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x180454: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x180454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x180458: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x180458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18045c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x18045cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x180460: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x180460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x180464: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x180464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x180468: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x180468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18046c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180470: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x180470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180474: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x180474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x180478: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x180478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x18047c: 0x8e440518  lw          $a0, 0x518($s2)
    ctx->pc = 0x18047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    // 0x180480: 0x8c830494  lw          $v1, 0x494($a0)
    ctx->pc = 0x180480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x180484: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x180484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x180488: 0xac820494  sw          $v0, 0x494($a0)
    ctx->pc = 0x180488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 2));
    // 0x18048c: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x18048cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_180490:
    // 0x180490: 0x924304f0  lbu         $v1, 0x4F0($s2)
    ctx->pc = 0x180490u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1264)));
    // 0x180494: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x180494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x180498: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x180498u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18049c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x18049cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1804a0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1804a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1804a4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1804a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1804a8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1804A8u;
    {
        const bool branch_taken_0x1804a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1804ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804A8u;
        // 0x1804ac: 0x3091ffff  andi        $s1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804a8) {
            ctx->pc = 0x1804D4u;
            goto label_1804d4;
        }
    }
    ctx->pc = 0x1804B0u;
    // 0x1804b0: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x1804b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1804b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1804b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1804b8: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x1804b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1804bc: 0x8c42b840  lw          $v0, -0x47C0($v0)
    ctx->pc = 0x1804bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948928)));
    // 0x1804c0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1804c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1804c4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1804c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1804c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1804c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1804cc: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1804CCu;
    {
        const bool branch_taken_0x1804cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1804D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804CCu;
        // 0x1804d0: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804cc) {
            ctx->pc = 0x18061Cu;
            goto label_18061c;
        }
    }
    ctx->pc = 0x1804D4u;
label_1804d4:
    // 0x1804d4: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1804d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1804d8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1804D8u;
    {
        const bool branch_taken_0x1804d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1804d8) {
            ctx->pc = 0x1804DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1804D8u;
            // 0x1804dc: 0x8e420518  lw          $v0, 0x518($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180504u;
            goto label_180504;
        }
    }
    ctx->pc = 0x1804E0u;
    // 0x1804e0: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x1804e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1804e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1804e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1804e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1804e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1804ec: 0x8c42b840  lw          $v0, -0x47C0($v0)
    ctx->pc = 0x1804ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948928)));
    // 0x1804f0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1804f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1804f4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1804f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1804f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1804f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1804fc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1804FCu;
    {
        const bool branch_taken_0x1804fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804FCu;
        // 0x180500: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804fc) {
            ctx->pc = 0x18061Cu;
            goto label_18061c;
        }
    }
    ctx->pc = 0x180504u;
label_180504:
    // 0x180504: 0x8c420490  lw          $v0, 0x490($v0)
    ctx->pc = 0x180504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
    // 0x180508: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x180508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x18050c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18050Cu;
    {
        const bool branch_taken_0x18050c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18050c) {
            ctx->pc = 0x180510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18050Cu;
            // 0x180510: 0x8e42048c  lw          $v0, 0x48C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180520u;
            goto label_180520;
        }
    }
    ctx->pc = 0x180514u;
    // 0x180514: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x180514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x180518: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x180518u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18051c: 0x8e42048c  lw          $v0, 0x48C($s2)
    ctx->pc = 0x18051cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
label_180520:
    // 0x180520: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x180520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x180524: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180524u;
    {
        const bool branch_taken_0x180524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180524) {
            ctx->pc = 0x180534u;
            goto label_180534;
        }
    }
    ctx->pc = 0x18052Cu;
    // 0x18052c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x18052cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x180530: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x180530u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_180534:
    // 0x180534: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x180534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x180538: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x180538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x18053c: 0x8c42b840  lw          $v0, -0x47C0($v0)
    ctx->pc = 0x18053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948928)));
    // 0x180540: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x180540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x180544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x180544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180548: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x180548u;
    {
        const bool branch_taken_0x180548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180548u;
        // 0x18054c: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180548) {
            ctx->pc = 0x18061Cu;
            goto label_18061c;
        }
    }
    ctx->pc = 0x180550u;
label_180550:
    // 0x180550: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x180550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180554: 0xc0cea6c  jal         func_33A9B0
    ctx->pc = 0x180554u;
    SET_GPR_U32(ctx, 31, 0x18055Cu);
    ctx->pc = 0x180558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180554u;
    // 0x180558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A9B0u, 0x180554u, 0x18055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18055Cu;
label_18055c:
    // 0x18055c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18055cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x180560: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x180560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x180564: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x180564u;
    {
        const bool branch_taken_0x180564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x180564) {
            ctx->pc = 0x180568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180564u;
            // 0x180568: 0x924304f0  lbu         $v1, 0x4F0($s2) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1805D4u;
            goto label_1805d4;
        }
    }
    ctx->pc = 0x18056Cu;
    // 0x18056c: 0x2622001e  addiu       $v0, $s1, 0x1E
    ctx->pc = 0x18056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 30));
    // 0x180570: 0x8e430530  lw          $v1, 0x530($s2)
    ctx->pc = 0x180570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1328)));
    // 0x180574: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x180574u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x180578: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x180578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18057c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18057cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x180580: 0xae420530  sw          $v0, 0x530($s2)
    ctx->pc = 0x180580u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1328), GPR_U32(ctx, 2));
    // 0x180584: 0xc062794  jal         func_189E50
    ctx->pc = 0x180584u;
    SET_GPR_U32(ctx, 31, 0x18058Cu);
    ctx->pc = 0x180588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180584u;
    // 0x180588: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189E50u, 0x180584u, 0x18058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18058Cu;
label_18058c:
    // 0x18058c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x18058cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x180590: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x180590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x180594: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x180594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x180598: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x180598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x18059c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18059cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1805a0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1805a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1805a4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1805a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1805a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1805a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1805ac: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1805acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1805b0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1805b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1805b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1805b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1805b8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1805b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1805bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1805bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1805c0: 0x8e440518  lw          $a0, 0x518($s2)
    ctx->pc = 0x1805c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    // 0x1805c4: 0x8c830494  lw          $v1, 0x494($a0)
    ctx->pc = 0x1805c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x1805c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1805c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1805cc: 0xac820494  sw          $v0, 0x494($a0)
    ctx->pc = 0x1805ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 2));
    // 0x1805d0: 0x924304f0  lbu         $v1, 0x4F0($s2)
    ctx->pc = 0x1805d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1264)));
label_1805d4:
    // 0x1805d4: 0x26220006  addiu       $v0, $s1, 0x6
    ctx->pc = 0x1805d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x1805d8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1805d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1805dc: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1805dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1805e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1805E0u;
    {
        const bool branch_taken_0x1805e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1805e0) {
            ctx->pc = 0x1805E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1805E0u;
            // 0x1805e4: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1805F4u;
            goto label_1805f4;
        }
    }
    ctx->pc = 0x1805E8u;
    // 0x1805e8: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x1805e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1805ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1805ECu;
    {
        const bool branch_taken_0x1805ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1805F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805ECu;
        // 0x1805f0: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1805ec) {
            ctx->pc = 0x180604u;
            goto label_180604;
        }
    }
    ctx->pc = 0x1805F4u;
label_1805f4:
    // 0x1805f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1805F4u;
    {
        const bool branch_taken_0x1805f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1805f4) {
            ctx->pc = 0x180604u;
            goto label_180604;
        }
    }
    ctx->pc = 0x1805FCu;
    // 0x1805fc: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1805fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x180600: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x180600u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_180604:
    // 0x180604: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x180604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x180608: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x180608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x18060c: 0x8c42b840  lw          $v0, -0x47C0($v0)
    ctx->pc = 0x18060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948928)));
    // 0x180610: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x180610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x180614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x180614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180618: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x180618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_18061c:
    // 0x18061c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18061cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180620: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x180620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180624: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x180624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180628: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18062c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18062cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180630: 0x3e00008  jr          $ra
    ctx->pc = 0x180630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180630u;
        // 0x180634: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180638u;
    // 0x180638: 0x0  nop
    ctx->pc = 0x180638u;
    // NOP
    // 0x18063c: 0x0  nop
    ctx->pc = 0x18063cu;
    // NOP
    if (ctx->pc == 0x18063cu) { ctx->pc = 0x180640u; }
}
