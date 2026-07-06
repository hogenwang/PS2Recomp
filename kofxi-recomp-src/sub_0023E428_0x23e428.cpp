#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023E428
// Address: 0x23e428 - 0x23e498
void sub_0023E428_0x23e428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E428_0x23e428");
#endif

    switch (ctx->pc) {
        case 0x23e430u: goto label_23e430;
        case 0x23e438u: goto label_23e438;
        case 0x23e440u: goto label_23e440;
        case 0x23e448u: goto label_23e448;
        case 0x23e450u: goto label_23e450;
        case 0x23e458u: goto label_23e458;
        case 0x23e460u: goto label_23e460;
        case 0x23e468u: goto label_23e468;
        case 0x23e470u: goto label_23e470;
        case 0x23e478u: goto label_23e478;
        case 0x23e480u: goto label_23e480;
        case 0x23e488u: goto label_23e488;
        case 0x23e490u: goto label_23e490;
        default: break;
    }

    ctx->pc = 0x23e428u;

    // 0x23e428: 0x3e00008  jr          $ra
    ctx->pc = 0x23E428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E430u;
label_23e430:
    // 0x23e430: 0x3e00008  jr          $ra
    ctx->pc = 0x23E430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E438u;
label_23e438:
    // 0x23e438: 0x3e00008  jr          $ra
    ctx->pc = 0x23E438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E440u;
label_23e440:
    // 0x23e440: 0x3e00008  jr          $ra
    ctx->pc = 0x23E440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E448u;
label_23e448:
    // 0x23e448: 0x3e00008  jr          $ra
    ctx->pc = 0x23E448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E450u;
label_23e450:
    // 0x23e450: 0x3e00008  jr          $ra
    ctx->pc = 0x23E450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E458u;
label_23e458:
    // 0x23e458: 0x3e00008  jr          $ra
    ctx->pc = 0x23E458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E458u;
            // 0x23e45c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E460u;
label_23e460:
    // 0x23e460: 0x3e00008  jr          $ra
    ctx->pc = 0x23E460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E468u;
label_23e468:
    // 0x23e468: 0x3e00008  jr          $ra
    ctx->pc = 0x23E468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E470u;
label_23e470:
    // 0x23e470: 0x3e00008  jr          $ra
    ctx->pc = 0x23E470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E478u;
label_23e478:
    // 0x23e478: 0x3e00008  jr          $ra
    ctx->pc = 0x23E478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E480u;
label_23e480:
    // 0x23e480: 0x3e00008  jr          $ra
    ctx->pc = 0x23E480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E488u;
label_23e488:
    // 0x23e488: 0x3e00008  jr          $ra
    ctx->pc = 0x23E488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E490u;
label_23e490:
    // 0x23e490: 0x3e00008  jr          $ra
    ctx->pc = 0x23E490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E498u;
    ctx->pc = 0x23e498u;
}
