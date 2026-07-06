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

// Function: sub_00110170
// Address: 0x110170 - 0x1102f8
void sub_00110170_0x110170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110170_0x110170");
#endif

    switch (ctx->pc) {
        case 0x110170u: goto label_110170;
        case 0x110174u: goto label_110174;
        case 0x110178u: goto label_110178;
        case 0x11017cu: goto label_11017c;
        case 0x110180u: goto label_110180;
        case 0x110184u: goto label_110184;
        case 0x110188u: goto label_110188;
        case 0x11018cu: goto label_11018c;
        case 0x110190u: goto label_110190;
        case 0x110194u: goto label_110194;
        case 0x110198u: goto label_110198;
        case 0x11019cu: goto label_11019c;
        case 0x1101a0u: goto label_1101a0;
        case 0x1101a4u: goto label_1101a4;
        case 0x1101a8u: goto label_1101a8;
        case 0x1101acu: goto label_1101ac;
        case 0x1101b0u: goto label_1101b0;
        case 0x1101b4u: goto label_1101b4;
        case 0x1101b8u: goto label_1101b8;
        case 0x1101bcu: goto label_1101bc;
        case 0x1101c0u: goto label_1101c0;
        case 0x1101c4u: goto label_1101c4;
        case 0x1101c8u: goto label_1101c8;
        case 0x1101ccu: goto label_1101cc;
        case 0x1101d0u: goto label_1101d0;
        case 0x1101d4u: goto label_1101d4;
        case 0x1101d8u: goto label_1101d8;
        case 0x1101dcu: goto label_1101dc;
        case 0x1101e0u: goto label_1101e0;
        case 0x1101e4u: goto label_1101e4;
        case 0x1101e8u: goto label_1101e8;
        case 0x1101ecu: goto label_1101ec;
        case 0x1101f0u: goto label_1101f0;
        case 0x1101f4u: goto label_1101f4;
        case 0x1101f8u: goto label_1101f8;
        case 0x1101fcu: goto label_1101fc;
        case 0x110200u: goto label_110200;
        case 0x110204u: goto label_110204;
        case 0x110208u: goto label_110208;
        case 0x11020cu: goto label_11020c;
        case 0x110210u: goto label_110210;
        case 0x110214u: goto label_110214;
        case 0x110218u: goto label_110218;
        case 0x11021cu: goto label_11021c;
        case 0x110220u: goto label_110220;
        case 0x110224u: goto label_110224;
        case 0x110228u: goto label_110228;
        case 0x11022cu: goto label_11022c;
        case 0x110230u: goto label_110230;
        case 0x110234u: goto label_110234;
        case 0x110238u: goto label_110238;
        case 0x11023cu: goto label_11023c;
        case 0x110240u: goto label_110240;
        case 0x110244u: goto label_110244;
        case 0x110248u: goto label_110248;
        case 0x11024cu: goto label_11024c;
        case 0x110250u: goto label_110250;
        case 0x110254u: goto label_110254;
        case 0x110258u: goto label_110258;
        case 0x11025cu: goto label_11025c;
        case 0x110260u: goto label_110260;
        case 0x110264u: goto label_110264;
        case 0x110268u: goto label_110268;
        case 0x11026cu: goto label_11026c;
        case 0x110270u: goto label_110270;
        case 0x110274u: goto label_110274;
        case 0x110278u: goto label_110278;
        case 0x11027cu: goto label_11027c;
        case 0x110280u: goto label_110280;
        case 0x110284u: goto label_110284;
        case 0x110288u: goto label_110288;
        case 0x11028cu: goto label_11028c;
        case 0x110290u: goto label_110290;
        case 0x110294u: goto label_110294;
        case 0x110298u: goto label_110298;
        case 0x11029cu: goto label_11029c;
        case 0x1102a0u: goto label_1102a0;
        case 0x1102a4u: goto label_1102a4;
        case 0x1102a8u: goto label_1102a8;
        case 0x1102acu: goto label_1102ac;
        case 0x1102b0u: goto label_1102b0;
        case 0x1102b4u: goto label_1102b4;
        case 0x1102b8u: goto label_1102b8;
        case 0x1102bcu: goto label_1102bc;
        case 0x1102c0u: goto label_1102c0;
        case 0x1102c4u: goto label_1102c4;
        case 0x1102c8u: goto label_1102c8;
        case 0x1102ccu: goto label_1102cc;
        case 0x1102d0u: goto label_1102d0;
        case 0x1102d4u: goto label_1102d4;
        case 0x1102d8u: goto label_1102d8;
        case 0x1102dcu: goto label_1102dc;
        case 0x1102e0u: goto label_1102e0;
        case 0x1102e4u: goto label_1102e4;
        case 0x1102e8u: goto label_1102e8;
        case 0x1102ecu: goto label_1102ec;
        case 0x1102f0u: goto label_1102f0;
        case 0x1102f4u: goto label_1102f4;
        default: break;
    }

    ctx->pc = 0x110170u;

label_110170:
    // 0x110170: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x110170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_110174:
    // 0x110174: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x110174u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_110178:
    // 0x110178: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x110178u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_11017c:
    // 0x11017c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11017cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_110180:
    // 0x110180: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x110180u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_110184:
    // 0x110184: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x110184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_110188:
    // 0x110188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11018c:
    // 0x11018c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x11018cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110190:
    // 0x110190: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x110190u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_110194:
    // 0x110194: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x110194u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_110198:
    // 0x110198: 0xc043ffe  jal         func_10FFF8
label_11019c:
    if (ctx->pc == 0x11019Cu) {
        ctx->pc = 0x11019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110198u;
        // 0x11019c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1101A0u;
        goto label_1101a0;
    }
    ctx->pc = 0x110198u;
    SET_GPR_U32(ctx, 31, 0x1101A0u);
    ctx->pc = 0x11019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110198u;
    // 0x11019c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FFF8u, 0x110198u, 0x1101A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1101A0u;
label_1101a0:
    // 0x1101a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1101a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1101a4:
    // 0x1101a4: 0x3e00008  jr          $ra
label_1101a8:
    if (ctx->pc == 0x1101A8u) {
        ctx->pc = 0x1101A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101A4u;
        // 0x1101a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1101ACu;
        goto label_1101ac;
    }
    ctx->pc = 0x1101A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1101A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101A4u;
        // 0x1101a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1101A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1101ACu;
label_1101ac:
    // 0x1101ac: 0x0  nop
    ctx->pc = 0x1101acu;
    // NOP
label_1101b0:
    // 0x1101b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1101b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1101b4:
    // 0x1101b4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1101b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1101b8:
    // 0x1101b8: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x1101b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
label_1101bc:
    // 0x1101bc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1101bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1101c0:
    // 0x1101c0: 0x247167d8  addiu       $s1, $v1, 0x67D8
    ctx->pc = 0x1101c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 26584));
label_1101c4:
    // 0x1101c4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1101c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_1101c8:
    // 0x1101c8: 0x8c6767d8  lw          $a3, 0x67D8($v1)
    ctx->pc = 0x1101c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26584)));
label_1101cc:
    // 0x1101cc: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1101ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1101d0:
    // 0x1101d0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1101d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1101d4:
    // 0x1101d4: 0x10a00043  beqz        $a1, . + 4 + (0x43 << 2)
label_1101d8:
    if (ctx->pc == 0x1101D8u) {
        ctx->pc = 0x1101D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101D4u;
        // 0x1101d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1101DCu;
        goto label_1101dc;
    }
    ctx->pc = 0x1101D4u;
    {
        const bool branch_taken_0x1101d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1101D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101D4u;
        // 0x1101d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101d4) {
            ctx->pc = 0x1102E4u;
            goto label_1102e4;
        }
    }
    ctx->pc = 0x1101DCu;
label_1101dc:
    // 0x1101dc: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x1101dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_1101e0:
    // 0x1101e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1101e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1101e4:
    // 0x1101e4: 0x24a4001e  addiu       $a0, $a1, 0x1E
    ctx->pc = 0x1101e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
label_1101e8:
    // 0x1101e8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1101e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1101ec:
    // 0x1101ec: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1101ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_1101f0:
    // 0x1101f0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1101f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1101f4:
    // 0x1101f4: 0x42903  sra         $a1, $a0, 4
    ctx->pc = 0x1101f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 4));
label_1101f8:
    // 0x1101f8: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x1101f8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_1101fc:
    // 0x1101fc: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
label_110200:
    if (ctx->pc == 0x110200u) {
        ctx->pc = 0x110200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101FCu;
        // 0x110200: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110204u;
        goto label_110204;
    }
    ctx->pc = 0x1101FCu;
    {
        const bool branch_taken_0x1101fc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x110200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101FCu;
        // 0x110200: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101fc) {
            ctx->pc = 0x110224u;
            goto label_110224;
        }
    }
    ctx->pc = 0x110204u;
label_110204:
    // 0x110204: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x110204u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_110208:
    // 0x110208: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x110208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_11020c:
    // 0x11020c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x11020cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_110210:
    // 0x110210: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x110210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_110214:
    // 0x110214: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x110214u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_110218:
    // 0x110218: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x110218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_11021c:
    // 0x11021c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_110220:
    if (ctx->pc == 0x110220u) {
        ctx->pc = 0x110224u;
        goto label_110224;
    }
    ctx->pc = 0x11021Cu;
    {
        const bool branch_taken_0x11021c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x11021c) {
            ctx->pc = 0x110208u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110208;
        }
    }
    ctx->pc = 0x110224u;
label_110224:
    // 0x110224: 0xc043414  jal         func_10D050
label_110228:
    if (ctx->pc == 0x110228u) {
        ctx->pc = 0x11022Cu;
        goto label_11022c;
    }
    ctx->pc = 0x110224u;
    SET_GPR_U32(ctx, 31, 0x11022Cu);
    ctx->pc = 0x10D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D050u, 0x110224u, 0x11022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11022Cu;
label_11022c:
    // 0x11022c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x11022cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_110230:
    // 0x110230: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
label_110234:
    if (ctx->pc == 0x110234u) {
        ctx->pc = 0x110238u;
        goto label_110238;
    }
    ctx->pc = 0x110230u;
    {
        const bool branch_taken_0x110230 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x110230) {
            ctx->pc = 0x110284u;
            goto label_110284;
        }
    }
    ctx->pc = 0x110238u;
label_110238:
    // 0x110238: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x110238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_11023c:
    // 0x11023c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11023cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_110240:
    // 0x110240: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x110240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_110244:
    // 0x110244: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x110244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_110248:
    // 0x110248: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x110248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_11024c:
    // 0x11024c: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x11024cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_110250:
    // 0x110250: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_110254:
    if (ctx->pc == 0x110254u) {
        ctx->pc = 0x110254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110250u;
        // 0x110254: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110258u;
        goto label_110258;
    }
    ctx->pc = 0x110250u;
    {
        const bool branch_taken_0x110250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110250u;
        // 0x110254: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110250) {
            ctx->pc = 0x1102D8u;
            goto label_1102d8;
        }
    }
    ctx->pc = 0x110258u;
label_110258:
    // 0x110258: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x110258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_11025c:
    // 0x11025c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x11025cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_110260:
    // 0x110260: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x110260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_110264:
    // 0x110264: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x110264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_110268:
    // 0x110268: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
label_11026c:
    if (ctx->pc == 0x11026Cu) {
        ctx->pc = 0x110270u;
        goto label_110270;
    }
    ctx->pc = 0x110268u;
    {
        const bool branch_taken_0x110268 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x110268) {
            ctx->pc = 0x1102D8u;
            goto label_1102d8;
        }
    }
    ctx->pc = 0x110270u;
label_110270:
    // 0x110270: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x110270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_110274:
    // 0x110274: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x110274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_110278:
    // 0x110278: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x110278u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11027c:
    // 0x11027c: 0x10000010  b           . + 4 + (0x10 << 2)
label_110280:
    if (ctx->pc == 0x110280u) {
        ctx->pc = 0x110280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11027Cu;
        // 0x110280: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110284u;
        goto label_110284;
    }
    ctx->pc = 0x11027Cu;
    {
        const bool branch_taken_0x11027c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11027Cu;
        // 0x110280: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11027c) {
            ctx->pc = 0x1102C0u;
            goto label_1102c0;
        }
    }
    ctx->pc = 0x110284u;
label_110284:
    // 0x110284: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x110284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_110288:
    // 0x110288: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x110288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_11028c:
    // 0x11028c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x11028cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_110290:
    // 0x110290: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_110294:
    if (ctx->pc == 0x110294u) {
        ctx->pc = 0x110294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110290u;
        // 0x110294: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110298u;
        goto label_110298;
    }
    ctx->pc = 0x110290u;
    {
        const bool branch_taken_0x110290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110290u;
        // 0x110294: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110290) {
            ctx->pc = 0x1102D8u;
            goto label_1102d8;
        }
    }
    ctx->pc = 0x110298u;
label_110298:
    // 0x110298: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x110298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_11029c:
    // 0x11029c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x11029cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1102a0:
    // 0x1102a0: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1102a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1102a4:
    // 0x1102a4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1102a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1102a8:
    // 0x1102a8: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_1102ac:
    if (ctx->pc == 0x1102ACu) {
        ctx->pc = 0x1102B0u;
        goto label_1102b0;
    }
    ctx->pc = 0x1102A8u;
    {
        const bool branch_taken_0x1102a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1102a8) {
            ctx->pc = 0x1102D8u;
            goto label_1102d8;
        }
    }
    ctx->pc = 0x1102B0u;
label_1102b0:
    // 0x1102b0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1102b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1102b4:
    // 0x1102b4: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x1102b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_1102b8:
    // 0x1102b8: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x1102b8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1102bc:
    // 0x1102bc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1102bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1102c0:
    // 0x1102c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1102c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1102c4:
    // 0x1102c4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1102c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1102c8:
    // 0x1102c8: 0xc0f809  jalr        $a2
label_1102cc:
    if (ctx->pc == 0x1102CCu) {
        ctx->pc = 0x1102CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102C8u;
        // 0x1102cc: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1102D0u;
        goto label_1102d0;
    }
    ctx->pc = 0x1102C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1102D0u);
        ctx->pc = 0x1102CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102C8u;
        // 0x1102cc: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1102C8u, 0x1102D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1102D0u;
label_1102d0:
    // 0x1102d0: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x1102d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_1102d4:
    // 0x1102d4: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x1102d4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1102d8:
    // 0x1102d8: 0xf  sync
    ctx->pc = 0x1102d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1102dc:
    // 0x1102dc: 0x42000038  ei
    ctx->pc = 0x1102dcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1102e0:
    // 0x1102e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1102e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1102e4:
    // 0x1102e4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1102e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1102e8:
    // 0x1102e8: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x1102e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1102ec:
    // 0x1102ec: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1102ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1102f0:
    // 0x1102f0: 0x3e00008  jr          $ra
label_1102f4:
    if (ctx->pc == 0x1102F4u) {
        ctx->pc = 0x1102F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102F0u;
        // 0x1102f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1102F8u;
        goto label_fallthrough_0x1102f0;
    }
    ctx->pc = 0x1102F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1102F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102F0u;
        // 0x1102f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1102F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1102f0:
    ctx->pc = 0x1102F8u;
}
