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

// Function: sub_001204B8
// Address: 0x1204b8 - 0x120528
void sub_001204B8_0x1204b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001204B8_0x1204b8");
#endif

    switch (ctx->pc) {
        case 0x1204d8u: goto label_1204d8;
        case 0x120504u: goto label_120504;
        case 0x12050cu: goto label_12050c;
        default: break;
    }

    ctx->pc = 0x1204b8u;

    // 0x1204b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1204b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1204bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1204bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1204c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1204c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1204c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1204c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1204c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1204c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1204cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1204ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1204d0: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x1204D0u;
    SET_GPR_U32(ctx, 31, 0x1204D8u);
    ctx->pc = 0x1204D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1204D0u;
    // 0x1204d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x1204D0u, 0x1204D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1204D8u;
label_1204d8:
    // 0x1204d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1204d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1204dc: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1204DCu;
    {
        const bool branch_taken_0x1204dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1204E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1204DCu;
        // 0x1204e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1204dc) {
            ctx->pc = 0x1204FCu;
            goto label_1204fc;
        }
    }
    ctx->pc = 0x1204E4u;
    // 0x1204e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1204e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1204e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1204e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1204ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1204ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1204f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1204f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1204f4: 0x80480ee  j           func_1203B8
    ctx->pc = 0x1204F4u;
    ctx->pc = 0x1204F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1204F4u;
    // 0x1204f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1203B8u;
    sub_001203B8_0x1203b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1204FCu;
label_1204fc:
    // 0x1204fc: 0xc048a5c  jal         func_122970
    ctx->pc = 0x1204FCu;
    SET_GPR_U32(ctx, 31, 0x120504u);
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x1204FCu, 0x120504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120504u;
label_120504:
    // 0x120504: 0xc0480ee  jal         func_1203B8
    ctx->pc = 0x120504u;
    SET_GPR_U32(ctx, 31, 0x12050Cu);
    ctx->pc = 0x120508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120504u;
    // 0x120508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1203B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203B8u, 0x120504u, 0x12050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12050Cu;
label_12050c:
    // 0x12050c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12050cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120510: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x120510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x120514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x120514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x120518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x120518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12051c: 0x3e00008  jr          $ra
    ctx->pc = 0x12051Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12051Cu;
        // 0x120520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12051Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120524u;
    // 0x120524: 0x0  nop
    ctx->pc = 0x120524u;
    // NOP
}
