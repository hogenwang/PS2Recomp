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

// Function: sub_00342EE0
// Address: 0x342ee0 - 0x342f70
void sub_00342EE0_0x342ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342EE0_0x342ee0");
#endif

    ctx->pc = 0x342ee0u;

    // 0x342ee0: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x342ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x342ee4: 0x8c43dd90  lw          $v1, -0x2270($v0)
    ctx->pc = 0x342ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x342ee8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x342ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x342eec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x342EECu;
    {
        const bool branch_taken_0x342eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x342eec) {
            ctx->pc = 0x342EFCu;
            goto label_342efc;
        }
    }
    ctx->pc = 0x342EF4u;
    // 0x342ef4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x342EF4u;
    {
        const bool branch_taken_0x342ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EF4u;
        // 0x342ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ef4) {
            ctx->pc = 0x342F64u;
            goto label_342f64;
        }
    }
    ctx->pc = 0x342EFCu;
label_342efc:
    // 0x342efc: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x342efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x342f00: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x342f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x342f04: 0x906694f8  lbu         $a2, -0x6B08($v1)
    ctx->pc = 0x342f04u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939896)));
    // 0x342f08: 0x90459500  lbu         $a1, -0x6B00($v0)
    ctx->pc = 0x342f08u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939904)));
    // 0x342f0c: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x342f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x342f10: 0x34626667  ori         $v0, $v1, 0x6667
    ctx->pc = 0x342f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x342f14: 0xc51823  subu        $v1, $a2, $a1
    ctx->pc = 0x342f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x342f18: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x342f18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x342f1c: 0x1010  mfhi        $v0
    ctx->pc = 0x342f1cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x342f20: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x342f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x342f24: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x342f24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x342f28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x342f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342f2c: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x342f2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x342f30: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x342F30u;
    {
        const bool branch_taken_0x342f30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x342f30) {
            ctx->pc = 0x342F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342F30u;
            // 0x342f34: 0x2841fff7  slti        $at, $v0, -0x9 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967287) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x342F40u;
            goto label_342f40;
        }
    }
    ctx->pc = 0x342F38u;
    // 0x342f38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x342F38u;
    {
        const bool branch_taken_0x342f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F38u;
        // 0x342f3c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342f38) {
            ctx->pc = 0x342F4Cu;
            goto label_342f4c;
        }
    }
    ctx->pc = 0x342F40u;
label_342f40:
    // 0x342f40: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x342F40u;
    {
        const bool branch_taken_0x342f40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342f40) {
            ctx->pc = 0x342F4Cu;
            goto label_342f4c;
        }
    }
    ctx->pc = 0x342F48u;
    // 0x342f48: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x342f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_342f4c:
    // 0x342f4c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x342f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x342f50: 0x90639490  lbu         $v1, -0x6B70($v1)
    ctx->pc = 0x342f50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939792)));
    // 0x342f54: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x342F54u;
    {
        const bool branch_taken_0x342f54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x342f54) {
            ctx->pc = 0x342F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342F54u;
            // 0x342f58: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342F64u;
            goto label_342f64;
        }
    }
    ctx->pc = 0x342F5Cu;
    // 0x342f5c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x342F5Cu;
    {
        const bool branch_taken_0x342f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x342f5c) {
            ctx->pc = 0x342F64u;
            goto label_342f64;
        }
    }
    ctx->pc = 0x342F64u;
label_342f64:
    // 0x342f64: 0x3e00008  jr          $ra
    ctx->pc = 0x342F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342F6Cu;
    // 0x342f6c: 0x0  nop
    ctx->pc = 0x342f6cu;
    // NOP
    if (ctx->pc == 0x342f6cu) { ctx->pc = 0x342f70u; }
}
