#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F7F48
// Address: 0x2f7f48 - 0x2f7fa0
void sub_002F7F48_0x2f7f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7F48_0x2f7f48");
#endif

    switch (ctx->pc) {
        case 0x2f7f5cu: goto label_2f7f5c;
        case 0x2f7f8cu: goto label_2f7f8c;
        default: break;
    }

    ctx->pc = 0x2f7f48u;

    // 0x2f7f48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f7f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f7f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f7f50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f7f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f7f54: 0xc0bde5a  jal         func_2F7968
    ctx->pc = 0x2F7F54u;
    SET_GPR_U32(ctx, 31, 0x2F7F5Cu);
    ctx->pc = 0x2F7F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7F54u;
            // 0x2f7f58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7968u;
    if (runtime->hasFunction(0x2F7968u)) {
        auto targetFn = runtime->lookupFunction(0x2F7968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7F5Cu; }
        if (ctx->pc != 0x2F7F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7968_0x2f7968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7F5Cu; }
        if (ctx->pc != 0x2F7F5Cu) { return; }
    }
    ctx->pc = 0x2F7F5Cu;
label_2f7f5c:
    // 0x2f7f5c: 0x8e04013c  lw          $a0, 0x13C($s0)
    ctx->pc = 0x2f7f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x2f7f60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f7f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7f64: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F7F64u;
    {
        const bool branch_taken_0x2f7f64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f7f64) {
            ctx->pc = 0x2F7F84u;
            goto label_2f7f84;
        }
    }
    ctx->pc = 0x2F7F6Cu;
    // 0x2f7f6c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2f7f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2f7f70: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7F70u;
    {
        const bool branch_taken_0x2f7f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2f7f70) {
            ctx->pc = 0x2F7F84u;
            goto label_2f7f84;
        }
    }
    ctx->pc = 0x2F7F78u;
    // 0x2f7f78: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x2f7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2f7f7c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7F7Cu;
    {
        const bool branch_taken_0x2f7f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F7F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7F7Cu;
            // 0x2f7f80: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7f7c) {
            ctx->pc = 0x2F7F90u;
            goto label_2f7f90;
        }
    }
    ctx->pc = 0x2F7F84u;
label_2f7f84:
    // 0x2f7f84: 0xc0bdd0e  jal         func_2F7438
    ctx->pc = 0x2F7F84u;
    SET_GPR_U32(ctx, 31, 0x2F7F8Cu);
    ctx->pc = 0x2F7F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7F84u;
            // 0x2f7f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7438u;
    if (runtime->hasFunction(0x2F7438u)) {
        auto targetFn = runtime->lookupFunction(0x2F7438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7F8Cu; }
        if (ctx->pc != 0x2F7F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7438_0x2f7438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7F8Cu; }
        if (ctx->pc != 0x2F7F8Cu) { return; }
    }
    ctx->pc = 0x2F7F8Cu;
label_2f7f8c:
    // 0x2f7f8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f7f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f7f90:
    // 0x2f7f90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7f94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f7f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7f98: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7F98u;
            // 0x2f7f9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7FA0u;
    ctx->pc = 0x2f7fa0u;
}
