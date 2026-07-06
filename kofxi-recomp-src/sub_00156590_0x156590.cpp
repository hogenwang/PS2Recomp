#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156590
// Address: 0x156590 - 0x156910
void sub_00156590_0x156590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156590_0x156590");
#endif

    switch (ctx->pc) {
        case 0x1565a8u: goto label_1565a8;
        case 0x1565b0u: goto label_1565b0;
        case 0x1565b8u: goto label_1565b8;
        case 0x1565c0u: goto label_1565c0;
        case 0x1565e0u: goto label_1565e0;
        case 0x156610u: goto label_156610;
        case 0x156624u: goto label_156624;
        case 0x156640u: goto label_156640;
        case 0x156670u: goto label_156670;
        case 0x156690u: goto label_156690;
        case 0x1566c0u: goto label_1566c0;
        case 0x1566dcu: goto label_1566dc;
        case 0x156700u: goto label_156700;
        case 0x1567a8u: goto label_1567a8;
        case 0x1567dcu: goto label_1567dc;
        case 0x156818u: goto label_156818;
        case 0x156820u: goto label_156820;
        case 0x156828u: goto label_156828;
        case 0x1568bcu: goto label_1568bc;
        default: break;
    }

    ctx->pc = 0x156590u;

    // 0x156590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x156594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x156594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x156598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15659c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15659cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1565a0: 0xc05ce48  jal         func_173920
    ctx->pc = 0x1565A0u;
    SET_GPR_U32(ctx, 31, 0x1565A8u);
    ctx->pc = 0x1565A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1565A0u;
            // 0x1565a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173920u;
    if (runtime->hasFunction(0x173920u)) {
        auto targetFn = runtime->lookupFunction(0x173920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565A8u; }
        if (ctx->pc != 0x1565A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173920_0x173920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565A8u; }
        if (ctx->pc != 0x1565A8u) { return; }
    }
    ctx->pc = 0x1565A8u;
label_1565a8:
    // 0x1565a8: 0xc061b84  jal         func_186E10
    ctx->pc = 0x1565A8u;
    SET_GPR_U32(ctx, 31, 0x1565B0u);
    ctx->pc = 0x1565ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1565A8u;
            // 0x1565ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E10u;
    if (runtime->hasFunction(0x186E10u)) {
        auto targetFn = runtime->lookupFunction(0x186E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565B0u; }
        if (ctx->pc != 0x1565B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186E10_0x186e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565B0u; }
        if (ctx->pc != 0x1565B0u) { return; }
    }
    ctx->pc = 0x1565B0u;
label_1565b0:
    // 0x1565b0: 0xc064f78  jal         func_193DE0
    ctx->pc = 0x1565B0u;
    SET_GPR_U32(ctx, 31, 0x1565B8u);
    ctx->pc = 0x1565B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1565B0u;
            // 0x1565b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193DE0u;
    if (runtime->hasFunction(0x193DE0u)) {
        auto targetFn = runtime->lookupFunction(0x193DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565B8u; }
        if (ctx->pc != 0x1565B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193DE0_0x193de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565B8u; }
        if (ctx->pc != 0x1565B8u) { return; }
    }
    ctx->pc = 0x1565B8u;
label_1565b8:
    // 0x1565b8: 0xc0625fc  jal         func_1897F0
    ctx->pc = 0x1565B8u;
    SET_GPR_U32(ctx, 31, 0x1565C0u);
    ctx->pc = 0x1565BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1565B8u;
            // 0x1565bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1897F0u;
    if (runtime->hasFunction(0x1897F0u)) {
        auto targetFn = runtime->lookupFunction(0x1897F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565C0u; }
        if (ctx->pc != 0x1565C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001897F0_0x1897f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565C0u; }
        if (ctx->pc != 0x1565C0u) { return; }
    }
    ctx->pc = 0x1565C0u;
label_1565c0:
    // 0x1565c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1565c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1565c4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1565c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1565c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1565c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1565cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1565CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1565D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1565CCu;
            // 0x1565d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1565D4u;
    // 0x1565d4: 0x0  nop
    ctx->pc = 0x1565d4u;
    // NOP
    // 0x1565d8: 0x0  nop
    ctx->pc = 0x1565d8u;
    // NOP
    // 0x1565dc: 0x0  nop
    ctx->pc = 0x1565dcu;
    // NOP
label_1565e0:
    // 0x1565e0: 0x8ca30270  lw          $v1, 0x270($a1)
    ctx->pc = 0x1565e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 624)));
    // 0x1565e4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1565e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1565e8: 0x34429200  ori         $v0, $v0, 0x9200
    ctx->pc = 0x1565e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37376);
    // 0x1565ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1565ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1565f0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1565F0u;
    {
        const bool branch_taken_0x1565f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1565f0) {
            ctx->pc = 0x1565F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1565F0u;
            // 0x1565f4: 0x24020081  addiu       $v0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1565FCu;
            goto label_1565fc;
        }
    }
    ctx->pc = 0x1565F8u;
    // 0x1565f8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1565f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1565fc:
    // 0x1565fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1565FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156604u;
    // 0x156604: 0x0  nop
    ctx->pc = 0x156604u;
    // NOP
    // 0x156608: 0x0  nop
    ctx->pc = 0x156608u;
    // NOP
    // 0x15660c: 0x0  nop
    ctx->pc = 0x15660cu;
    // NOP
label_156610:
    // 0x156610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x156614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156618: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x156618u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15661c: 0xc057bd8  jal         func_15EF60
    ctx->pc = 0x15661Cu;
    SET_GPR_U32(ctx, 31, 0x156624u);
    ctx->pc = 0x156620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15661Cu;
            // 0x156620: 0x24a50268  addiu       $a1, $a1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF60u;
    if (runtime->hasFunction(0x15EF60u)) {
        auto targetFn = runtime->lookupFunction(0x15EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156624u; }
        if (ctx->pc != 0x156624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF60_0x15ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156624u; }
        if (ctx->pc != 0x156624u) { return; }
    }
    ctx->pc = 0x156624u;
label_156624:
    // 0x156624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156628: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x156628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15662c: 0x3e00008  jr          $ra
    ctx->pc = 0x15662Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15662Cu;
            // 0x156630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156634u;
    // 0x156634: 0x0  nop
    ctx->pc = 0x156634u;
    // NOP
    // 0x156638: 0x0  nop
    ctx->pc = 0x156638u;
    // NOP
    // 0x15663c: 0x0  nop
    ctx->pc = 0x15663cu;
    // NOP
label_156640:
    // 0x156640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x156644: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x156644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x156648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15664c: 0x34429200  ori         $v0, $v0, 0x9200
    ctx->pc = 0x15664cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37376);
    // 0x156650: 0x8ca30270  lw          $v1, 0x270($a1)
    ctx->pc = 0x156650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 624)));
    // 0x156654: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x156654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x156658: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x156658u;
    {
        const bool branch_taken_0x156658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156658) {
            ctx->pc = 0x15665Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156658u;
            // 0x15665c: 0x24a40268  addiu       $a0, $a1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 616));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156668u;
            goto label_156668;
        }
    }
    ctx->pc = 0x156660u;
    // 0x156660: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x156660u;
    {
        const bool branch_taken_0x156660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156660u;
            // 0x156664: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156660) {
            ctx->pc = 0x156680u;
            goto label_156680;
        }
    }
    ctx->pc = 0x156668u;
label_156668:
    // 0x156668: 0xc058068  jal         func_1601A0
    ctx->pc = 0x156668u;
    SET_GPR_U32(ctx, 31, 0x156670u);
    ctx->pc = 0x1601A0u;
    if (runtime->hasFunction(0x1601A0u)) {
        auto targetFn = runtime->lookupFunction(0x1601A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156670u; }
        if (ctx->pc != 0x156670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601A0_0x1601a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156670u; }
        if (ctx->pc != 0x156670u) { return; }
    }
    ctx->pc = 0x156670u;
label_156670:
    // 0x156670: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x156670u;
    {
        const bool branch_taken_0x156670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156670) {
            ctx->pc = 0x156674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156670u;
            // 0x156674: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156680u;
            goto label_156680;
        }
    }
    ctx->pc = 0x156678u;
    // 0x156678: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x156678u;
    {
        const bool branch_taken_0x156678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15667Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156678u;
            // 0x15667c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156678) {
            ctx->pc = 0x156680u;
            goto label_156680;
        }
    }
    ctx->pc = 0x156680u;
label_156680:
    // 0x156680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156684: 0x3e00008  jr          $ra
    ctx->pc = 0x156684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156684u;
            // 0x156688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15668Cu;
    // 0x15668c: 0x0  nop
    ctx->pc = 0x15668cu;
    // NOP
label_156690:
    // 0x156690: 0x8ca205dc  lw          $v0, 0x5DC($a1)
    ctx->pc = 0x156690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1500)));
    // 0x156694: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x156694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x156698: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x156698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15669c: 0x8c420498  lw          $v0, 0x498($v0)
    ctx->pc = 0x15669cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1176)));
    // 0x1566a0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1566a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1566a4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1566A4u;
    {
        const bool branch_taken_0x1566a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1566a4) {
            ctx->pc = 0x1566A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1566A4u;
            // 0x1566a8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1566B0u;
            goto label_1566b0;
        }
    }
    ctx->pc = 0x1566ACu;
    // 0x1566ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1566acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1566b0:
    // 0x1566b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1566B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1566B8u;
    // 0x1566b8: 0x0  nop
    ctx->pc = 0x1566b8u;
    // NOP
    // 0x1566bc: 0x0  nop
    ctx->pc = 0x1566bcu;
    // NOP
label_1566c0:
    // 0x1566c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1566c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1566c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1566c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1566c8: 0x8ca205dc  lw          $v0, 0x5DC($a1)
    ctx->pc = 0x1566c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1500)));
    // 0x1566cc: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1566ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1566d0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1566d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1566d4: 0xc05806c  jal         func_1601B0
    ctx->pc = 0x1566D4u;
    SET_GPR_U32(ctx, 31, 0x1566DCu);
    ctx->pc = 0x1566D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1566D4u;
            // 0x1566d8: 0x24440268  addiu       $a0, $v0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601B0u;
    if (runtime->hasFunction(0x1601B0u)) {
        auto targetFn = runtime->lookupFunction(0x1601B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566DCu; }
        if (ctx->pc != 0x1566DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601B0_0x1601b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566DCu; }
        if (ctx->pc != 0x1566DCu) { return; }
    }
    ctx->pc = 0x1566DCu;
label_1566dc:
    // 0x1566dc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1566DCu;
    {
        const bool branch_taken_0x1566dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1566dc) {
            ctx->pc = 0x1566E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1566DCu;
            // 0x1566e0: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1566E8u;
            goto label_1566e8;
        }
    }
    ctx->pc = 0x1566E4u;
    // 0x1566e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1566e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1566e8:
    // 0x1566e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1566e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1566ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1566ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1566F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1566ECu;
            // 0x1566f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1566F4u;
    // 0x1566f4: 0x0  nop
    ctx->pc = 0x1566f4u;
    // NOP
    // 0x1566f8: 0x0  nop
    ctx->pc = 0x1566f8u;
    // NOP
    // 0x1566fc: 0x0  nop
    ctx->pc = 0x1566fcu;
    // NOP
label_156700:
    // 0x156700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x156704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x156708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15670c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x156710: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x156710u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x156714: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x156714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156718: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156718u;
    {
        const bool branch_taken_0x156718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x15671Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156718u;
            // 0x15671c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156718) {
            ctx->pc = 0x156728u;
            goto label_156728;
        }
    }
    ctx->pc = 0x156720u;
    // 0x156720: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x156720u;
    {
        const bool branch_taken_0x156720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156720u;
            // 0x156724: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156720) {
            ctx->pc = 0x156750u;
            goto label_156750;
        }
    }
    ctx->pc = 0x156728u;
label_156728:
    // 0x156728: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x156728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x15672c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15672cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x156730: 0x24424070  addiu       $v0, $v0, 0x4070
    ctx->pc = 0x156730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16496));
    // 0x156734: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x156734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x156738: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x156738u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15673c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15673cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156740: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x156740u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156744: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x156744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x156748: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x156748u;
    {
        const bool branch_taken_0x156748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15674Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156748u;
            // 0x15674c: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156748) {
            ctx->pc = 0x156768u;
            goto label_156768;
        }
    }
    ctx->pc = 0x156750u;
label_156750:
    // 0x156750: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x156750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x156754: 0x24424070  addiu       $v0, $v0, 0x4070
    ctx->pc = 0x156754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16496));
    // 0x156758: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x156758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x15675c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x15675cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x156760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156764: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x156764u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_156768:
    // 0x156768: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x156768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x15676c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15676cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x156770: 0x24424080  addiu       $v0, $v0, 0x4080
    ctx->pc = 0x156770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x156774: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x156774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x156778: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x156778u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15677c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x15677cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x156780: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x156780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x156784: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15678c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x15678cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156790: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x156790u;
    {
        const bool branch_taken_0x156790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156790) {
            ctx->pc = 0x1567D0u;
            goto label_1567d0;
        }
    }
    ctx->pc = 0x156798u;
    // 0x156798: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x156798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x15679c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15679cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567a0: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x1567A0u;
    SET_GPR_U32(ctx, 31, 0x1567A8u);
    ctx->pc = 0x1567A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1567A0u;
            // 0x1567a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567A8u; }
        if (ctx->pc != 0x1567A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567A8u; }
        if (ctx->pc != 0x1567A8u) { return; }
    }
    ctx->pc = 0x1567A8u;
label_1567a8:
    // 0x1567a8: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x1567a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x1567ac: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x1567acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x1567b0: 0x24424080  addiu       $v0, $v0, 0x4080
    ctx->pc = 0x1567b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x1567b4: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x1567b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x1567b8: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x1567b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1567bc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1567bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1567c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1567c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1567c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1567c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1567c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1567c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1567cc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1567ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1567d0:
    // 0x1567d0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x1567d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x1567d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1567d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567d8: 0x24634070  addiu       $v1, $v1, 0x4070
    ctx->pc = 0x1567d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16496));
label_1567dc:
    // 0x1567dc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1567dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1567e0: 0x58400003  blezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1567E0u;
    {
        const bool branch_taken_0x1567e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1567e0) {
            ctx->pc = 0x1567E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1567E0u;
            // 0x1567e4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1567F0u;
            goto label_1567f0;
        }
    }
    ctx->pc = 0x1567E8u;
    // 0x1567e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1567E8u;
    {
        const bool branch_taken_0x1567e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1567ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1567E8u;
            // 0x1567ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1567e8) {
            ctx->pc = 0x156800u;
            goto label_156800;
        }
    }
    ctx->pc = 0x1567F0u;
label_1567f0:
    // 0x1567f0: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1567f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1567f4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1567F4u;
    {
        const bool branch_taken_0x1567f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1567F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1567F4u;
            // 0x1567f8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1567f4) {
            ctx->pc = 0x1567DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1567dc;
        }
    }
    ctx->pc = 0x1567FCu;
    // 0x1567fc: 0x0  nop
    ctx->pc = 0x1567fcu;
    // NOP
label_156800:
    // 0x156800: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x156800u;
    {
        const bool branch_taken_0x156800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x156800) {
            ctx->pc = 0x1568A8u;
            goto label_1568a8;
        }
    }
    ctx->pc = 0x156808u;
    // 0x156808: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x156808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x15680c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15680cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156810: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x156810u;
    SET_GPR_U32(ctx, 31, 0x156818u);
    ctx->pc = 0x156814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156810u;
            // 0x156814: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156818u; }
        if (ctx->pc != 0x156818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156818u; }
        if (ctx->pc != 0x156818u) { return; }
    }
    ctx->pc = 0x156818u;
label_156818:
    // 0x156818: 0xc0549ec  jal         func_1527B0
    ctx->pc = 0x156818u;
    SET_GPR_U32(ctx, 31, 0x156820u);
    ctx->pc = 0x15681Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156818u;
            // 0x15681c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1527B0u;
    if (runtime->hasFunction(0x1527B0u)) {
        auto targetFn = runtime->lookupFunction(0x1527B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156820u; }
        if (ctx->pc != 0x156820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001527B0_0x1527b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156820u; }
        if (ctx->pc != 0x156820u) { return; }
    }
    ctx->pc = 0x156820u;
label_156820:
    // 0x156820: 0xc055914  jal         func_156450
    ctx->pc = 0x156820u;
    SET_GPR_U32(ctx, 31, 0x156828u);
    ctx->pc = 0x156824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156820u;
            // 0x156824: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156450u;
    if (runtime->hasFunction(0x156450u)) {
        auto targetFn = runtime->lookupFunction(0x156450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156828u; }
        if (ctx->pc != 0x156828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156450_0x156450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156828u; }
        if (ctx->pc != 0x156828u) { return; }
    }
    ctx->pc = 0x156828u;
label_156828:
    // 0x156828: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x156828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15682c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15682cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x156830: 0xa0604070  sb          $zero, 0x4070($v1)
    ctx->pc = 0x156830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16496), (uint8_t)GPR_U32(ctx, 0));
    // 0x156834: 0xa0404078  sb          $zero, 0x4078($v0)
    ctx->pc = 0x156834u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16504), (uint8_t)GPR_U32(ctx, 0));
    // 0x156838: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x156838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15683c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15683cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x156840: 0xac60407c  sw          $zero, 0x407C($v1)
    ctx->pc = 0x156840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16508), GPR_U32(ctx, 0));
    // 0x156844: 0xa0404080  sb          $zero, 0x4080($v0)
    ctx->pc = 0x156844u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16512), (uint8_t)GPR_U32(ctx, 0));
    // 0x156848: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x156848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15684c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15684cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x156850: 0xa0604071  sb          $zero, 0x4071($v1)
    ctx->pc = 0x156850u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16497), (uint8_t)GPR_U32(ctx, 0));
    // 0x156854: 0xa040409c  sb          $zero, 0x409C($v0)
    ctx->pc = 0x156854u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16540), (uint8_t)GPR_U32(ctx, 0));
    // 0x156858: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x156858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15685c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15685cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x156860: 0xac6040a0  sw          $zero, 0x40A0($v1)
    ctx->pc = 0x156860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16544), GPR_U32(ctx, 0));
    // 0x156864: 0xa04040a4  sb          $zero, 0x40A4($v0)
    ctx->pc = 0x156864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16548), (uint8_t)GPR_U32(ctx, 0));
    // 0x156868: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x156868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15686c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15686cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x156870: 0xa0604072  sb          $zero, 0x4072($v1)
    ctx->pc = 0x156870u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16498), (uint8_t)GPR_U32(ctx, 0));
    // 0x156874: 0xa04040c0  sb          $zero, 0x40C0($v0)
    ctx->pc = 0x156874u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16576), (uint8_t)GPR_U32(ctx, 0));
    // 0x156878: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x156878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15687c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15687cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x156880: 0xac6040c4  sw          $zero, 0x40C4($v1)
    ctx->pc = 0x156880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16580), GPR_U32(ctx, 0));
    // 0x156884: 0xa04040c8  sb          $zero, 0x40C8($v0)
    ctx->pc = 0x156884u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16584), (uint8_t)GPR_U32(ctx, 0));
    // 0x156888: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x156888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15688c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15688cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x156890: 0xa0604073  sb          $zero, 0x4073($v1)
    ctx->pc = 0x156890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16499), (uint8_t)GPR_U32(ctx, 0));
    // 0x156894: 0xa04040e4  sb          $zero, 0x40E4($v0)
    ctx->pc = 0x156894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16612), (uint8_t)GPR_U32(ctx, 0));
    // 0x156898: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x156898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15689c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15689cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x1568a0: 0xac6040e8  sw          $zero, 0x40E8($v1)
    ctx->pc = 0x1568a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16616), GPR_U32(ctx, 0));
    // 0x1568a4: 0xa04040ec  sb          $zero, 0x40EC($v0)
    ctx->pc = 0x1568a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16620), (uint8_t)GPR_U32(ctx, 0));
label_1568a8:
    // 0x1568a8: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x1568a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x1568ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1568acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1568b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1568b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1568b4: 0x24a54070  addiu       $a1, $a1, 0x4070
    ctx->pc = 0x1568b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16496));
    // 0x1568b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1568b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1568bc:
    // 0x1568bc: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x1568bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1568c0: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1568c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1568c4: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1568c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1568c8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1568C8u;
    {
        const bool branch_taken_0x1568c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1568c8) {
            ctx->pc = 0x1568D8u;
            goto label_1568d8;
        }
    }
    ctx->pc = 0x1568D0u;
    // 0x1568d0: 0xac40d9c0  sw          $zero, -0x2640($v0)
    ctx->pc = 0x1568d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957504), GPR_U32(ctx, 0));
    // 0x1568d4: 0x0  nop
    ctx->pc = 0x1568d4u;
    // NOP
label_1568d8:
    // 0x1568d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1568d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1568dc: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x1568dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1568e0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1568E0u;
    {
        const bool branch_taken_0x1568e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1568E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1568E0u;
            // 0x1568e4: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568e0) {
            ctx->pc = 0x1568BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1568bc;
        }
    }
    ctx->pc = 0x1568E8u;
    // 0x1568e8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1568e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1568ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1568ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1568f0: 0xa066d9c8  sb          $a2, -0x2638($v1)
    ctx->pc = 0x1568f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957512), (uint8_t)GPR_U32(ctx, 6));
    // 0x1568f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1568f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1568f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1568f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1568fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1568fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156900: 0x3e00008  jr          $ra
    ctx->pc = 0x156900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156900u;
            // 0x156904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156908u;
    // 0x156908: 0x0  nop
    ctx->pc = 0x156908u;
    // NOP
    // 0x15690c: 0x0  nop
    ctx->pc = 0x15690cu;
    // NOP
    ctx->pc = 0x156910u;
}
