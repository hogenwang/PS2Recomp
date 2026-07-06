#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6A10
// Address: 0x1c6a10 - 0x1c6a48
void sub_001C6A10_0x1c6a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6A10_0x1c6a10");
#endif

    switch (ctx->pc) {
        case 0x1c6a10u: goto label_1c6a10;
        case 0x1c6a14u: goto label_1c6a14;
        case 0x1c6a18u: goto label_1c6a18;
        case 0x1c6a1cu: goto label_1c6a1c;
        case 0x1c6a20u: goto label_1c6a20;
        case 0x1c6a24u: goto label_1c6a24;
        case 0x1c6a28u: goto label_1c6a28;
        case 0x1c6a2cu: goto label_1c6a2c;
        case 0x1c6a30u: goto label_1c6a30;
        case 0x1c6a34u: goto label_1c6a34;
        case 0x1c6a38u: goto label_1c6a38;
        case 0x1c6a3cu: goto label_1c6a3c;
        case 0x1c6a40u: goto label_1c6a40;
        case 0x1c6a44u: goto label_1c6a44;
        default: break;
    }

    ctx->pc = 0x1c6a10u;

label_1c6a10:
    // 0x1c6a10: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c6a14:
    // 0x1c6a14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c6a18:
    // 0x1c6a18: 0x8c46f098  lw          $a2, -0xF68($v0)
    ctx->pc = 0x1c6a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963352)));
label_1c6a1c:
    // 0x1c6a1c: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1c6a20:
    if (ctx->pc == 0x1C6A20u) {
        ctx->pc = 0x1C6A20u;
            // 0x1c6a20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1C6A24u;
        goto label_1c6a24;
    }
    ctx->pc = 0x1C6A1Cu;
    {
        const bool branch_taken_0x1c6a1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A1Cu;
            // 0x1c6a20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a1c) {
            ctx->pc = 0x1C6A38u;
            goto label_1c6a38;
        }
    }
    ctx->pc = 0x1C6A24u;
label_1c6a24:
    // 0x1c6a24: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c6a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c6a28:
    // 0x1c6a28: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c6a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1c6a2c:
    // 0x1c6a2c: 0x8c44f09c  lw          $a0, -0xF64($v0)
    ctx->pc = 0x1c6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963356)));
label_1c6a30:
    // 0x1c6a30: 0xc0f809  jalr        $a2
label_1c6a34:
    if (ctx->pc == 0x1C6A34u) {
        ctx->pc = 0x1C6A34u;
            // 0x1c6a34: 0x8c65f0a0  lw          $a1, -0xF60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963360)));
        ctx->pc = 0x1C6A38u;
        goto label_1c6a38;
    }
    ctx->pc = 0x1C6A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C6A38u);
        ctx->pc = 0x1C6A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A30u;
            // 0x1c6a34: 0x8c65f0a0  lw          $a1, -0xF60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963360)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C6A38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C6A38u; }
            if (ctx->pc != 0x1C6A38u) { return; }
        }
        }
    }
    ctx->pc = 0x1C6A38u;
label_1c6a38:
    // 0x1c6a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6a3c:
    // 0x1c6a3c: 0x3e00008  jr          $ra
label_1c6a40:
    if (ctx->pc == 0x1C6A40u) {
        ctx->pc = 0x1C6A40u;
            // 0x1c6a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C6A44u;
        goto label_1c6a44;
    }
    ctx->pc = 0x1C6A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A3Cu;
            // 0x1c6a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6A44u;
label_1c6a44:
    // 0x1c6a44: 0x0  nop
    ctx->pc = 0x1c6a44u;
    // NOP
    ctx->pc = 0x1c6a48u;
}
