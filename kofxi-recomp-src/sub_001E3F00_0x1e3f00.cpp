#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E3F00
// Address: 0x1e3f00 - 0x1e3f70
void sub_001E3F00_0x1e3f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3F00_0x1e3f00");
#endif

    switch (ctx->pc) {
        case 0x1e3f58u: goto label_1e3f58;
        default: break;
    }

    ctx->pc = 0x1e3f00u;

    // 0x1e3f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3f04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e3f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e3f08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e3f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e3f0c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e3f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3f10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e3f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e3f14: 0x8c83008c  lw          $v1, 0x8C($a0)
    ctx->pc = 0x1e3f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x1e3f18: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E3F18u;
    {
        const bool branch_taken_0x1e3f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F18u;
            // 0x1e3f1c: 0x2c640003  sltiu       $a0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f18) {
            ctx->pc = 0x1E3F48u;
            goto label_1e3f48;
        }
    }
    ctx->pc = 0x1E3F20u;
    // 0x1e3f20: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3F20u;
    {
        const bool branch_taken_0x1e3f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f20) {
            ctx->pc = 0x1E3F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F20u;
            // 0x1e3f24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E3F38u;
            goto label_1e3f38;
        }
    }
    ctx->pc = 0x1E3F28u;
    // 0x1e3f28: 0x1070000c  beq         $v1, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E3F28u;
    {
        const bool branch_taken_0x1e3f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1E3F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F28u;
            // 0x1e3f2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f28) {
            ctx->pc = 0x1E3F5Cu;
            goto label_1e3f5c;
        }
    }
    ctx->pc = 0x1E3F30u;
    // 0x1e3f30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3F30u;
    {
        const bool branch_taken_0x1e3f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F30u;
            // 0x1e3f34: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f30) {
            ctx->pc = 0x1E3F50u;
            goto label_1e3f50;
        }
    }
    ctx->pc = 0x1E3F38u;
label_1e3f38:
    // 0x1e3f38: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3F38u;
    {
        const bool branch_taken_0x1e3f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3f38) {
            ctx->pc = 0x1E3F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F38u;
            // 0x1e3f3c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E3F58u;
            goto label_1e3f58;
        }
    }
    ctx->pc = 0x1E3F40u;
    // 0x1e3f40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3F40u;
    {
        const bool branch_taken_0x1e3f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F40u;
            // 0x1e3f44: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f40) {
            ctx->pc = 0x1E3F50u;
            goto label_1e3f50;
        }
    }
    ctx->pc = 0x1E3F48u;
label_1e3f48:
    // 0x1e3f48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3F48u;
    {
        const bool branch_taken_0x1e3f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F48u;
            // 0x1e3f4c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f48) {
            ctx->pc = 0x1E3F58u;
            goto label_1e3f58;
        }
    }
    ctx->pc = 0x1E3F50u;
label_1e3f50:
    // 0x1e3f50: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E3F50u;
    SET_GPR_U32(ctx, 31, 0x1E3F58u);
    ctx->pc = 0x1E3F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F50u;
            // 0x1e3f54: 0x2484db58  addiu       $a0, $a0, -0x24A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F58u; }
        if (ctx->pc != 0x1E3F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F58u; }
        if (ctx->pc != 0x1E3F58u) { return; }
    }
    ctx->pc = 0x1E3F58u;
label_1e3f58:
    // 0x1e3f58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e3f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3f5c:
    // 0x1e3f5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e3f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3f60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e3f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e3f64: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F64u;
            // 0x1e3f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3F6Cu;
    // 0x1e3f6c: 0x0  nop
    ctx->pc = 0x1e3f6cu;
    // NOP
    ctx->pc = 0x1e3f70u;
}
