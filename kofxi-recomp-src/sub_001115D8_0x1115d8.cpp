#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001115D8
// Address: 0x1115d8 - 0x1116c8
void sub_001115D8_0x1115d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001115D8_0x1115d8");
#endif

    switch (ctx->pc) {
        case 0x111630u: goto label_111630;
        case 0x111658u: goto label_111658;
        case 0x111674u: goto label_111674;
        default: break;
    }

    ctx->pc = 0x1115d8u;

    // 0x1115d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1115d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1115dc: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1115dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1115e0: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1115e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1115e4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1115e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115e8: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1115e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1115ec: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1115ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115f0: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1115f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1115f4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1115f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115f8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1115f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1115fc: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1115fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111600: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x111600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x111604: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x111604u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111608: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x111608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x11160c: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x11160cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111610: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x111610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x111614: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x111614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111618: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x111618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x11161c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x11161cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111620: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x111620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x111624: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x111624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x111628: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x111628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x11162c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x11162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_111630:
    // 0x111630: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x111630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111634: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x111634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111638: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x111638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11163c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x11163cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x111640: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x111640u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111644: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x111644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x111648: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x111648u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11164c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x11164cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111650: 0xc04434c  jal         func_110D30
    ctx->pc = 0x111650u;
    SET_GPR_U32(ctx, 31, 0x111658u);
    ctx->pc = 0x111654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111650u;
            // 0x111654: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111658u; }
        if (ctx->pc != 0x111658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111658u; }
        if (ctx->pc != 0x111658u) { return; }
    }
    ctx->pc = 0x111658u;
label_111658:
    // 0x111658: 0x287c2  srl         $s0, $v0, 31
    ctx->pc = 0x111658u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x11165c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x11165Cu;
    {
        const bool branch_taken_0x11165c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x111660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11165Cu;
            // 0x111660: 0x8fa200c8  lw          $v0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11165c) {
            ctx->pc = 0x111690u;
            goto label_111690;
        }
    }
    ctx->pc = 0x111664u;
    // 0x111664: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x111664u;
    {
        const bool branch_taken_0x111664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111664u;
            // 0x111668: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111664) {
            ctx->pc = 0x111690u;
            goto label_111690;
        }
    }
    ctx->pc = 0x11166Cu;
    // 0x11166c: 0xc043736  jal         func_10DCD8
    ctx->pc = 0x11166Cu;
    SET_GPR_U32(ctx, 31, 0x111674u);
    ctx->pc = 0x111670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11166Cu;
            // 0x111670: 0x2222018  mult        $a0, $s1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD8u;
    if (runtime->hasFunction(0x10DCD8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111674u; }
        if (ctx->pc != 0x111674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010DCD8_0x10dcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111674u; }
        if (ctx->pc != 0x111674u) { return; }
    }
    ctx->pc = 0x111674u;
label_111674:
    // 0x111674: 0x2a23007f  slti        $v1, $s1, 0x7F
    ctx->pc = 0x111674u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x111678: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x111678u;
    {
        const bool branch_taken_0x111678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111678) {
            ctx->pc = 0x11167Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x111678u;
            // 0x11167c: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x111680u;
            goto label_111680;
        }
    }
    ctx->pc = 0x111680u;
label_111680:
    // 0x111680: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x111680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x111684: 0x2a420065  slti        $v0, $s2, 0x65
    ctx->pc = 0x111684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x111688: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x111688u;
    {
        const bool branch_taken_0x111688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11168Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111688u;
            // 0x11168c: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111688) {
            ctx->pc = 0x111630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_111630;
        }
    }
    ctx->pc = 0x111690u;
label_111690:
    // 0x111690: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x111690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111694: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x111694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x111698: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x111698u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11169c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x11169cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1116a0: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1116a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1116a4: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1116a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1116a8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1116a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1116ac: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1116acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1116b0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1116b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1116b4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1116b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1116b8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1116b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1116bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1116BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1116C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1116BCu;
            // 0x1116c0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1116C4u;
    // 0x1116c4: 0x0  nop
    ctx->pc = 0x1116c4u;
    // NOP
    ctx->pc = 0x1116c8u;
}
