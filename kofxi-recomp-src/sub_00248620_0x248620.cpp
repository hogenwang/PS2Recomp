#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00248620
// Address: 0x248620 - 0x2486c8
void sub_00248620_0x248620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248620_0x248620");
#endif

    switch (ctx->pc) {
        case 0x248648u: goto label_248648;
        case 0x248664u: goto label_248664;
        default: break;
    }

    ctx->pc = 0x248620u;

    // 0x248620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x248620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x248624: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x248624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x248628: 0x3c1101c1  lui         $s1, 0x1C1
    ctx->pc = 0x248628u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)449 << 16));
    // 0x24862c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24862cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248630: 0x8e26ae48  lw          $a2, -0x51B8($s1)
    ctx->pc = 0x248630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946376)));
    // 0x248634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248638: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x248638u;
    {
        const bool branch_taken_0x248638 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24863Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248638u;
            // 0x24863c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248638) {
            ctx->pc = 0x24865Cu;
            goto label_24865c;
        }
    }
    ctx->pc = 0x248640u;
    // 0x248640: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x248640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x248644: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x248644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_248648:
    // 0x248648: 0x5043000b  beql        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x248648u;
    {
        const bool branch_taken_0x248648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x248648) {
            ctx->pc = 0x24864Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248648u;
            // 0x24864c: 0xae060020  sw          $a2, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248678u;
            goto label_248678;
        }
    }
    ctx->pc = 0x248650u;
    // 0x248650: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x248650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x248654: 0x54c0fffc  bnel        $a2, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x248654u;
    {
        const bool branch_taken_0x248654 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x248654) {
            ctx->pc = 0x248658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248654u;
            // 0x248658: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248648;
        }
    }
    ctx->pc = 0x24865Cu;
label_24865c:
    // 0x24865c: 0xc098552  jal         func_261548
    ctx->pc = 0x24865Cu;
    SET_GPR_U32(ctx, 31, 0x248664u);
    ctx->pc = 0x248660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24865Cu;
            // 0x248660: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248664u; }
        if (ctx->pc != 0x248664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248664u; }
        if (ctx->pc != 0x248664u) { return; }
    }
    ctx->pc = 0x248664u;
label_248664:
    // 0x248664: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x248664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248668: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x248668u;
    {
        const bool branch_taken_0x248668 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x24866Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248668u;
            // 0x24866c: 0x8e25ae48  lw          $a1, -0x51B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248668) {
            ctx->pc = 0x248690u;
            goto label_248690;
        }
    }
    ctx->pc = 0x248670u;
    // 0x248670: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x248670u;
    {
        const bool branch_taken_0x248670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248670u;
            // 0x248674: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248670) {
            ctx->pc = 0x2486B0u;
            goto label_2486b0;
        }
    }
    ctx->pc = 0x248678u;
label_248678:
    // 0x248678: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x248678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x24867c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x24867cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x248680: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x248680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x248684: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x248684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x248688: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x248688u;
    {
        const bool branch_taken_0x248688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24868Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248688u;
            // 0x24868c: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248688) {
            ctx->pc = 0x2486B0u;
            goto label_2486b0;
        }
    }
    ctx->pc = 0x248690u;
label_248690:
    // 0x248690: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x248690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x248694: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x248694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x248698: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x248698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x24869c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x24869cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x2486a0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2486a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2486a4: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x2486a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x2486a8: 0xae26ae48  sw          $a2, -0x51B8($s1)
    ctx->pc = 0x2486a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294946376), GPR_U32(ctx, 6));
    // 0x2486ac: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x2486acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
label_2486b0:
    // 0x2486b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2486b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2486b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2486b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2486b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2486b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2486bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2486BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2486C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2486BCu;
            // 0x2486c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2486C4u;
    // 0x2486c4: 0x0  nop
    ctx->pc = 0x2486c4u;
    // NOP
    ctx->pc = 0x2486c8u;
}
