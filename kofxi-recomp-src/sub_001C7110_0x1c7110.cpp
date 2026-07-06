#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7110
// Address: 0x1c7110 - 0x1c7140
void sub_001C7110_0x1c7110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7110_0x1c7110");
#endif

    switch (ctx->pc) {
        case 0x1c7110u: goto label_1c7110;
        case 0x1c7114u: goto label_1c7114;
        case 0x1c7118u: goto label_1c7118;
        case 0x1c711cu: goto label_1c711c;
        case 0x1c7120u: goto label_1c7120;
        case 0x1c7124u: goto label_1c7124;
        case 0x1c7128u: goto label_1c7128;
        case 0x1c712cu: goto label_1c712c;
        case 0x1c7130u: goto label_1c7130;
        case 0x1c7134u: goto label_1c7134;
        case 0x1c7138u: goto label_1c7138;
        case 0x1c713cu: goto label_1c713c;
        default: break;
    }

    ctx->pc = 0x1c7110u;

label_1c7110:
    // 0x1c7110: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c7110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c7114:
    // 0x1c7114: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7118:
    // 0x1c7118: 0x8c4338d4  lw          $v1, 0x38D4($v0)
    ctx->pc = 0x1c7118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14548)));
label_1c711c:
    // 0x1c711c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c711cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7120:
    // 0x1c7120: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c7124:
    if (ctx->pc == 0x1C7124u) {
        ctx->pc = 0x1C7124u;
            // 0x1c7124: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1C7128u;
        goto label_1c7128;
    }
    ctx->pc = 0x1C7120u;
    {
        const bool branch_taken_0x1c7120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7120u;
            // 0x1c7124: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7120) {
            ctx->pc = 0x1C7134u;
            goto label_1c7134;
        }
    }
    ctx->pc = 0x1C7128u;
label_1c7128:
    // 0x1c7128: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c7128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c712c:
    // 0x1c712c: 0x60f809  jalr        $v1
label_1c7130:
    if (ctx->pc == 0x1C7130u) {
        ctx->pc = 0x1C7130u;
            // 0x1c7130: 0x8c4438d8  lw          $a0, 0x38D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14552)));
        ctx->pc = 0x1C7134u;
        goto label_1c7134;
    }
    ctx->pc = 0x1C712Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C7134u);
        ctx->pc = 0x1C7130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C712Cu;
            // 0x1c7130: 0x8c4438d8  lw          $a0, 0x38D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14552)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C7134u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C7134u; }
            if (ctx->pc != 0x1C7134u) { return; }
        }
        }
    }
    ctx->pc = 0x1C7134u;
label_1c7134:
    // 0x1c7134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7138:
    // 0x1c7138: 0x3e00008  jr          $ra
label_1c713c:
    if (ctx->pc == 0x1C713Cu) {
        ctx->pc = 0x1C713Cu;
            // 0x1c713c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7140u;
        goto label_fallthrough_0x1c7138;
    }
    ctx->pc = 0x1C7138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C713Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7138u;
            // 0x1c713c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1c7138:
    ctx->pc = 0x1C7140u;
    ctx->pc = 0x1c7140u;
}
