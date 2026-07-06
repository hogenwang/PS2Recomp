#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002455C8
// Address: 0x2455c8 - 0x2457e8
void sub_002455C8_0x2455c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002455C8_0x2455c8");
#endif

    switch (ctx->pc) {
        case 0x245630u: goto label_245630;
        case 0x245638u: goto label_245638;
        case 0x24569cu: goto label_24569c;
        case 0x2456c8u: goto label_2456c8;
        case 0x245728u: goto label_245728;
        case 0x24575cu: goto label_24575c;
        case 0x2457a8u: goto label_2457a8;
        default: break;
    }

    ctx->pc = 0x2455c8u;

    // 0x2455c8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2455c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x2455cc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2455ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2455d0: 0xffb50130  sd          $s5, 0x130($sp)
    ctx->pc = 0x2455d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 21));
    // 0x2455d4: 0xffb30110  sd          $s3, 0x110($sp)
    ctx->pc = 0x2455d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 19));
    // 0x2455d8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2455d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2455dc: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x2455dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x2455e0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2455e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2455e4: 0xffb100f0  sd          $s1, 0xF0($sp)
    ctx->pc = 0x2455e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 17));
    // 0x2455e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2455e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2455ec: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x2455ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x2455f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2455f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2455f4: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x2455f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
    // 0x2455f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2455f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2455fc: 0xffbe0160  sd          $fp, 0x160($sp)
    ctx->pc = 0x2455fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 30));
    // 0x245600: 0xffb70150  sd          $s7, 0x150($sp)
    ctx->pc = 0x245600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 23));
    // 0x245604: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x245604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x245608: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x245608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x24560c: 0x8e56000c  lw          $s6, 0xC($s2)
    ctx->pc = 0x24560cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x245610: 0x8c43fefc  lw          $v1, -0x104($v0)
    ctx->pc = 0x245610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967036)));
    // 0x245614: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x245614u;
    {
        const bool branch_taken_0x245614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x245618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245614u;
            // 0x245618: 0xafa600d0  sw          $a2, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245614) {
            ctx->pc = 0x2457B8u;
            goto label_2457b8;
        }
    }
    ctx->pc = 0x24561Cu;
    // 0x24561c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x24561cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245620: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x245620u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x245624: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x245624u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x245628: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x245628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24562c: 0x0  nop
    ctx->pc = 0x24562cu;
    // NOP
label_245630:
    // 0x245630: 0xc048c96  jal         func_123258
    ctx->pc = 0x245630u;
    SET_GPR_U32(ctx, 31, 0x245638u);
    ctx->pc = 0x245634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245630u;
            // 0x245634: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245638u; }
        if (ctx->pc != 0x245638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245638u; }
        if (ctx->pc != 0x245638u) { return; }
    }
    ctx->pc = 0x245638u;
label_245638:
    // 0x245638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24563c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24563Cu;
    {
        const bool branch_taken_0x24563c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x245640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24563Cu;
            // 0x245640: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24563c) {
            ctx->pc = 0x24564Cu;
            goto label_24564c;
        }
    }
    ctx->pc = 0x245644u;
    // 0x245644: 0x52910006  beql        $s4, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x245644u;
    {
        const bool branch_taken_0x245644 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 17));
        if (branch_taken_0x245644) {
            ctx->pc = 0x245648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x245644u;
            // 0x245648: 0x8e550000  lw          $s5, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x245660u;
            goto label_245660;
        }
    }
    ctx->pc = 0x24564Cu;
label_24564c:
    // 0x24564c: 0x16220024  bne         $s1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x24564Cu;
    {
        const bool branch_taken_0x24564c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x245650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24564Cu;
            // 0x245650: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24564c) {
            ctx->pc = 0x2456E0u;
            goto label_2456e0;
        }
    }
    ctx->pc = 0x245654u;
    // 0x245654: 0x16910022  bne         $s4, $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x245654u;
    {
        const bool branch_taken_0x245654 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 17));
        if (branch_taken_0x245654) {
            ctx->pc = 0x2456E0u;
            goto label_2456e0;
        }
    }
    ctx->pc = 0x24565Cu;
    // 0x24565c: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x24565cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_245660:
    // 0x245660: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x245660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x245664: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x245664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x245668: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x245668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24566c: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x24566cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x245670: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x245670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x245674: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x245674u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x245678: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x245678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24567c: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x24567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x245680: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x245680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x245684: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x245684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x245688: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x245688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24568c: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x24568cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x245690: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x245690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x245694: 0xc048c96  jal         func_123258
    ctx->pc = 0x245694u;
    SET_GPR_U32(ctx, 31, 0x24569Cu);
    ctx->pc = 0x245698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245694u;
            // 0x245698: 0xafa60020  sw          $a2, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24569Cu; }
        if (ctx->pc != 0x24569Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24569Cu; }
        if (ctx->pc != 0x24569Cu) { return; }
    }
    ctx->pc = 0x24569Cu;
label_24569c:
    // 0x24569c: 0x96c3002c  lhu         $v1, 0x2C($s6)
    ctx->pc = 0x24569cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x2456a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2456a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2456a4: 0x8e480034  lw          $t0, 0x34($s2)
    ctx->pc = 0x2456a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2456a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2456a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2456ac: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x2456acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2456b0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2456b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2456b4: 0xa7a3003c  sh          $v1, 0x3C($sp)
    ctx->pc = 0x2456b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x2456b8: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x2456b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2456bc: 0xafa80040  sw          $t0, 0x40($sp)
    ctx->pc = 0x2456bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 8));
    // 0x2456c0: 0xc091412  jal         func_245048
    ctx->pc = 0x2456C0u;
    SET_GPR_U32(ctx, 31, 0x2456C8u);
    ctx->pc = 0x2456C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2456C0u;
            // 0x2456c4: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245048u;
    if (runtime->hasFunction(0x245048u)) {
        auto targetFn = runtime->lookupFunction(0x245048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2456C8u; }
        if (ctx->pc != 0x2456C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245048_0x245048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2456C8u; }
        if (ctx->pc != 0x2456C8u) { return; }
    }
    ctx->pc = 0x2456C8u;
label_2456c8:
    // 0x2456c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2456c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2456cc: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2456CCu;
    {
        const bool branch_taken_0x2456cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2456D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2456CCu;
            // 0x2456d0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2456cc) {
            ctx->pc = 0x2457A8u;
            goto label_2457a8;
        }
    }
    ctx->pc = 0x2456D4u;
    // 0x2456d4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2456d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2456d8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2456d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2456dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2456dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2456e0:
    // 0x2456e0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2456E0u;
    {
        const bool branch_taken_0x2456e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2456E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2456E0u;
            // 0x2456e4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2456e0) {
            ctx->pc = 0x2456F0u;
            goto label_2456f0;
        }
    }
    ctx->pc = 0x2456E8u;
    // 0x2456e8: 0x12830005  beq         $s4, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2456E8u;
    {
        const bool branch_taken_0x2456e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2456e8) {
            ctx->pc = 0x245700u;
            goto label_245700;
        }
    }
    ctx->pc = 0x2456F0u;
label_2456f0:
    // 0x2456f0: 0x16230020  bne         $s1, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2456F0u;
    {
        const bool branch_taken_0x2456f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x2456F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2456F0u;
            // 0x2456f4: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2456f0) {
            ctx->pc = 0x245774u;
            goto label_245774;
        }
    }
    ctx->pc = 0x2456F8u;
    // 0x2456f8: 0x1682001e  bne         $s4, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2456F8u;
    {
        const bool branch_taken_0x2456f8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2456f8) {
            ctx->pc = 0x245774u;
            goto label_245774;
        }
    }
    ctx->pc = 0x245700u;
label_245700:
    // 0x245700: 0x12600029  beqz        $s3, . + 4 + (0x29 << 2)
    ctx->pc = 0x245700u;
    {
        const bool branch_taken_0x245700 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x245704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245700u;
            // 0x245704: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245700) {
            ctx->pc = 0x2457A8u;
            goto label_2457a8;
        }
    }
    ctx->pc = 0x245708u;
    // 0x245708: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x245708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x24570c: 0x8e75000c  lw          $s5, 0xC($s3)
    ctx->pc = 0x24570cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x245710: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x245710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x245714: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x245714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x245718: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x245718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x24571c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x24571cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x245720: 0xc048c96  jal         func_123258
    ctx->pc = 0x245720u;
    SET_GPR_U32(ctx, 31, 0x245728u);
    ctx->pc = 0x245724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245720u;
            // 0x245724: 0xafb50004  sw          $s5, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245728u; }
        if (ctx->pc != 0x245728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245728u; }
        if (ctx->pc != 0x245728u) { return; }
    }
    ctx->pc = 0x245728u;
label_245728:
    // 0x245728: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x245728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x24572c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24572cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245730: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x245730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x245734: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x245734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245738: 0x96c7002c  lhu         $a3, 0x2C($s6)
    ctx->pc = 0x245738u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x24573c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x24573cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245740: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x245740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x245744: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x245744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x245748: 0xa7a70054  sh          $a3, 0x54($sp)
    ctx->pc = 0x245748u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 7));
    // 0x24574c: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x24574cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x245750: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x245750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x245754: 0xc091412  jal         func_245048
    ctx->pc = 0x245754u;
    SET_GPR_U32(ctx, 31, 0x24575Cu);
    ctx->pc = 0x245758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245754u;
            // 0x245758: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245048u;
    if (runtime->hasFunction(0x245048u)) {
        auto targetFn = runtime->lookupFunction(0x245048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24575Cu; }
        if (ctx->pc != 0x24575Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245048_0x245048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24575Cu; }
        if (ctx->pc != 0x24575Cu) { return; }
    }
    ctx->pc = 0x24575Cu;
label_24575c:
    // 0x24575c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24575cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245760: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x245760u;
    {
        const bool branch_taken_0x245760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x245764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245760u;
            // 0x245764: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245760) {
            ctx->pc = 0x2457A8u;
            goto label_2457a8;
        }
    }
    ctx->pc = 0x245768u;
    // 0x245768: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x245768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x24576c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x24576cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x245770: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x245770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_245774:
    // 0x245774: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x245774u;
    {
        const bool branch_taken_0x245774 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x245778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245774u;
            // 0x245778: 0x24a3ffe0  addiu       $v1, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245774) {
            ctx->pc = 0x245788u;
            goto label_245788;
        }
    }
    ctx->pc = 0x24577Cu;
    // 0x24577c: 0x92a20001  lbu         $v0, 0x1($s5)
    ctx->pc = 0x24577cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x245780: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245780u;
    {
        const bool branch_taken_0x245780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245780u;
            // 0x245784: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245780) {
            ctx->pc = 0x24578Cu;
            goto label_24578c;
        }
    }
    ctx->pc = 0x245788u;
label_245788:
    // 0x245788: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x245788u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
label_24578c:
    // 0x24578c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24578cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x245790: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x245790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x245794: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x245794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x245798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24579c: 0x2446ffd0  addiu       $a2, $v0, -0x30
    ctx->pc = 0x24579cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2457a0: 0xc090a8e  jal         func_242A38
    ctx->pc = 0x2457A0u;
    SET_GPR_U32(ctx, 31, 0x2457A8u);
    ctx->pc = 0x2457A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2457A0u;
            // 0x2457a4: 0x2467ffc0  addiu       $a3, $v1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A38u;
    if (runtime->hasFunction(0x242A38u)) {
        auto targetFn = runtime->lookupFunction(0x242A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2457A8u; }
        if (ctx->pc != 0x2457A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242A38_0x242a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2457A8u; }
        if (ctx->pc != 0x2457A8u) { return; }
    }
    ctx->pc = 0x2457A8u;
label_2457a8:
    // 0x2457a8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2457a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2457ac: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x2457acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2457b0: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x2457B0u;
    {
        const bool branch_taken_0x2457b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2457B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2457B0u;
            // 0x2457b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2457b0) {
            ctx->pc = 0x245630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245630;
        }
    }
    ctx->pc = 0x2457B8u;
label_2457b8:
    // 0x2457b8: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x2457b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2457bc: 0xdfbe0160  ld          $fp, 0x160($sp)
    ctx->pc = 0x2457bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2457c0: 0xdfb70150  ld          $s7, 0x150($sp)
    ctx->pc = 0x2457c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2457c4: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x2457c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2457c8: 0xdfb50130  ld          $s5, 0x130($sp)
    ctx->pc = 0x2457c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2457cc: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x2457ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2457d0: 0xdfb30110  ld          $s3, 0x110($sp)
    ctx->pc = 0x2457d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2457d4: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x2457d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2457d8: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x2457d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2457dc: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x2457dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2457e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2457E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2457E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2457E0u;
            // 0x2457e4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2457E8u;
    ctx->pc = 0x2457e8u;
}
