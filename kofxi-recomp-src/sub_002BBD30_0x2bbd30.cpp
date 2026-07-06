#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BBD30
// Address: 0x2bbd30 - 0x2bbe08
void sub_002BBD30_0x2bbd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBD30_0x2bbd30");
#endif

    switch (ctx->pc) {
        case 0x2bbd48u: goto label_2bbd48;
        case 0x2bbd58u: goto label_2bbd58;
        case 0x2bbd70u: goto label_2bbd70;
        case 0x2bbd90u: goto label_2bbd90;
        case 0x2bbda0u: goto label_2bbda0;
        case 0x2bbdc0u: goto label_2bbdc0;
        case 0x2bbdd0u: goto label_2bbdd0;
        case 0x2bbde0u: goto label_2bbde0;
        case 0x2bbde8u: goto label_2bbde8;
        case 0x2bbdf8u: goto label_2bbdf8;
        default: break;
    }

    ctx->pc = 0x2bbd30u;

    // 0x2bbd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bbd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bbd34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bbd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bbd38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bbd38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bbd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bbd40: 0xc0ac626  jal         func_2B1898
    ctx->pc = 0x2BBD40u;
    SET_GPR_U32(ctx, 31, 0x2BBD48u);
    ctx->pc = 0x2BBD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD40u;
            // 0x2bbd44: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1898u;
    if (runtime->hasFunction(0x2B1898u)) {
        auto targetFn = runtime->lookupFunction(0x2B1898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD48u; }
        if (ctx->pc != 0x2BBD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1898_0x2b1898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD48u; }
        if (ctx->pc != 0x2BBD48u) { return; }
    }
    ctx->pc = 0x2BBD48u;
label_2bbd48:
    // 0x2bbd48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBD48u;
    {
        const bool branch_taken_0x2bbd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD48u;
            // 0x2bbd4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd48) {
            ctx->pc = 0x2BBD60u;
            goto label_2bbd60;
        }
    }
    ctx->pc = 0x2BBD50u;
    // 0x2bbd50: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x2BBD50u;
    SET_GPR_U32(ctx, 31, 0x2BBD58u);
    ctx->pc = 0x2BBD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD50u;
            // 0x2bbd54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD58u; }
        if (ctx->pc != 0x2BBD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD58u; }
        if (ctx->pc != 0x2BBD58u) { return; }
    }
    ctx->pc = 0x2BBD58u;
label_2bbd58:
    // 0x2bbd58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BBD58u;
    {
        const bool branch_taken_0x2bbd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD58u;
            // 0x2bbd5c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd58) {
            ctx->pc = 0x2BBD64u;
            goto label_2bbd64;
        }
    }
    ctx->pc = 0x2BBD60u;
label_2bbd60:
    // 0x2bbd60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bbd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bbd64:
    // 0x2bbd64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bbd64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbd68: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD68u;
            // 0x2bbd6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBD70u;
label_2bbd70:
    // 0x2bbd70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bbd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bbd74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bbd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bbd78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bbd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bbd7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bbd7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bbd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bbd84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bbd84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd88: 0xc0ac626  jal         func_2B1898
    ctx->pc = 0x2BBD88u;
    SET_GPR_U32(ctx, 31, 0x2BBD90u);
    ctx->pc = 0x2BBD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD88u;
            // 0x2bbd8c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1898u;
    if (runtime->hasFunction(0x2B1898u)) {
        auto targetFn = runtime->lookupFunction(0x2B1898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD90u; }
        if (ctx->pc != 0x2BBD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1898_0x2b1898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD90u; }
        if (ctx->pc != 0x2BBD90u) { return; }
    }
    ctx->pc = 0x2BBD90u;
label_2bbd90:
    // 0x2bbd90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBD90u;
    {
        const bool branch_taken_0x2bbd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD90u;
            // 0x2bbd94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd90) {
            ctx->pc = 0x2BBDA8u;
            goto label_2bbda8;
        }
    }
    ctx->pc = 0x2BBD98u;
    // 0x2bbd98: 0xc0a729e  jal         func_29CA78
    ctx->pc = 0x2BBD98u;
    SET_GPR_U32(ctx, 31, 0x2BBDA0u);
    ctx->pc = 0x2BBD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD98u;
            // 0x2bbd9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA78u;
    if (runtime->hasFunction(0x29CA78u)) {
        auto targetFn = runtime->lookupFunction(0x29CA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBDA0u; }
        if (ctx->pc != 0x2BBDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA78_0x29ca78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBDA0u; }
        if (ctx->pc != 0x2BBDA0u) { return; }
    }
    ctx->pc = 0x2BBDA0u;
label_2bbda0:
    // 0x2bbda0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBDA0u;
    {
        const bool branch_taken_0x2bbda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBDA0u;
            // 0x2bbda4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbda0) {
            ctx->pc = 0x2BBDB0u;
            goto label_2bbdb0;
        }
    }
    ctx->pc = 0x2BBDA8u;
label_2bbda8:
    // 0x2bbda8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bbda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bbdac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bbdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bbdb0:
    // 0x2bbdb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bbdb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbdb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bbdb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBDB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBDB8u;
            // 0x2bbdbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBDC0u;
label_2bbdc0:
    // 0x2bbdc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bbdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bbdc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bbdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bbdc8: 0xc0a72c8  jal         func_29CB20
    ctx->pc = 0x2BBDC8u;
    SET_GPR_U32(ctx, 31, 0x2BBDD0u);
    ctx->pc = 0x29CB20u;
    if (runtime->hasFunction(0x29CB20u)) {
        auto targetFn = runtime->lookupFunction(0x29CB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBDD0u; }
        if (ctx->pc != 0x2BBDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CB20_0x29cb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBDD0u; }
        if (ctx->pc != 0x2BBDD0u) { return; }
    }
    ctx->pc = 0x2BBDD0u;
label_2bbdd0:
    // 0x2bbdd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bbdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBDD4u;
            // 0x2bbdd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBDDCu;
    // 0x2bbddc: 0x0  nop
    ctx->pc = 0x2bbddcu;
    // NOP
label_2bbde0:
    // 0x2bbde0: 0x80a72e0  j           func_29CB80
    ctx->pc = 0x2BBDE0u;
    ctx->pc = 0x29CB80u;
    {
        auto targetFn = runtime->lookupFunction(0x29CB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2BBDE8u;
label_2bbde8:
    // 0x2bbde8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bbde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bbdec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bbdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bbdf0: 0xc0a72e8  jal         func_29CBA0
    ctx->pc = 0x2BBDF0u;
    SET_GPR_U32(ctx, 31, 0x2BBDF8u);
    ctx->pc = 0x29CBA0u;
    if (runtime->hasFunction(0x29CBA0u)) {
        auto targetFn = runtime->lookupFunction(0x29CBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBDF8u; }
        if (ctx->pc != 0x2BBDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CBA0_0x29cba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBDF8u; }
        if (ctx->pc != 0x2BBDF8u) { return; }
    }
    ctx->pc = 0x2BBDF8u;
label_2bbdf8:
    // 0x2bbdf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bbdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBDFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBDFCu;
            // 0x2bbe00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBE04u;
    // 0x2bbe04: 0x0  nop
    ctx->pc = 0x2bbe04u;
    // NOP
    ctx->pc = 0x2bbe08u;
}
