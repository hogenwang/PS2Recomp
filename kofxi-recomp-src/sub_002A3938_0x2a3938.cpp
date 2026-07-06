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

// Function: sub_002A3938
// Address: 0x2a3938 - 0x2a3980
void sub_002A3938_0x2a3938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3938_0x2a3938");
#endif

    switch (ctx->pc) {
        case 0x2a3938u: goto label_2a3938;
        case 0x2a393cu: goto label_2a393c;
        case 0x2a3940u: goto label_2a3940;
        case 0x2a3944u: goto label_2a3944;
        case 0x2a3948u: goto label_2a3948;
        case 0x2a394cu: goto label_2a394c;
        case 0x2a3950u: goto label_2a3950;
        case 0x2a3954u: goto label_2a3954;
        case 0x2a3958u: goto label_2a3958;
        case 0x2a395cu: goto label_2a395c;
        case 0x2a3960u: goto label_2a3960;
        case 0x2a3964u: goto label_2a3964;
        case 0x2a3968u: goto label_2a3968;
        case 0x2a396cu: goto label_2a396c;
        case 0x2a3970u: goto label_2a3970;
        case 0x2a3974u: goto label_2a3974;
        case 0x2a3978u: goto label_2a3978;
        case 0x2a397cu: goto label_2a397c;
        default: break;
    }

    ctx->pc = 0x2a3938u;

label_2a3938:
    // 0x2a3938: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a3938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2a393c:
    // 0x2a393c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a393cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a3940:
    // 0x2a3940: 0x8c426a44  lw          $v0, 0x6A44($v0)
    ctx->pc = 0x2a3940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27204)));
label_2a3944:
    // 0x2a3944: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a3948:
    if (ctx->pc == 0x2A3948u) {
        ctx->pc = 0x2A3948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3944u;
        // 0x2a3948: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A394Cu;
        goto label_2a394c;
    }
    ctx->pc = 0x2A3944u;
    {
        const bool branch_taken_0x2a3944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3944u;
        // 0x2a3948: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3944) {
            ctx->pc = 0x2A395Cu;
            goto label_2a395c;
        }
    }
    ctx->pc = 0x2A394Cu;
label_2a394c:
    // 0x2a394c: 0x40f809  jalr        $v0
label_2a3950:
    if (ctx->pc == 0x2A3950u) {
        ctx->pc = 0x2A3954u;
        goto label_2a3954;
    }
    ctx->pc = 0x2A394Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3954u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A394Cu, 0x2A3954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3954u;
label_2a3954:
    // 0x2a3954: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a3958:
    if (ctx->pc == 0x2A3958u) {
        ctx->pc = 0x2A3958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3954u;
        // 0x2a3958: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A395Cu;
        goto label_2a395c;
    }
    ctx->pc = 0x2A3954u;
    {
        const bool branch_taken_0x2a3954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3954u;
        // 0x2a3958: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3954) {
            ctx->pc = 0x2A3964u;
            goto label_2a3964;
        }
    }
    ctx->pc = 0x2A395Cu;
label_2a395c:
    // 0x2a395c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a395cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3960:
    // 0x2a3960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3964:
    // 0x2a3964: 0x3e00008  jr          $ra
label_2a3968:
    if (ctx->pc == 0x2A3968u) {
        ctx->pc = 0x2A3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3964u;
        // 0x2a3968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A396Cu;
        goto label_2a396c;
    }
    ctx->pc = 0x2A3964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3964u;
        // 0x2a3968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A396Cu;
label_2a396c:
    // 0x2a396c: 0x0  nop
    ctx->pc = 0x2a396cu;
    // NOP
label_2a3970:
    // 0x2a3970: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a3970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2a3974:
    // 0x2a3974: 0x3e00008  jr          $ra
label_2a3978:
    if (ctx->pc == 0x2A3978u) {
        ctx->pc = 0x2A3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3974u;
        // 0x2a3978: 0x8c626a44  lw          $v0, 0x6A44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A397Cu;
        goto label_2a397c;
    }
    ctx->pc = 0x2A3974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3974u;
        // 0x2a3978: 0x8c626a44  lw          $v0, 0x6A44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27204)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A397Cu;
label_2a397c:
    // 0x2a397c: 0x0  nop
    ctx->pc = 0x2a397cu;
    // NOP
}
