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

// Function: sub_002BB3F8
// Address: 0x2bb3f8 - 0x2bb488
void sub_002BB3F8_0x2bb3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB3F8_0x2bb3f8");
#endif

    switch (ctx->pc) {
        case 0x2bb43cu: goto label_2bb43c;
        case 0x2bb448u: goto label_2bb448;
        case 0x2bb460u: goto label_2bb460;
        default: break;
    }

    ctx->pc = 0x2bb3f8u;

    // 0x2bb3f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bb3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bb3fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bb3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bb400: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bb400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bb404: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bb404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb408: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bb408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bb40c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bb40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb410: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2BB410u;
    {
        const bool branch_taken_0x2bb410 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB410u;
        // 0x2bb414: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb410) {
            ctx->pc = 0x2BB468u;
            goto label_2bb468;
        }
    }
    ctx->pc = 0x2BB418u;
    // 0x2bb418: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x2bb418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2bb41c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BB41Cu;
    {
        const bool branch_taken_0x2bb41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB41Cu;
        // 0x2bb420: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb41c) {
            ctx->pc = 0x2BB468u;
            goto label_2bb468;
        }
    }
    ctx->pc = 0x2BB424u;
    // 0x2bb424: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2bb424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2bb428: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x2bb428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x2bb42c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2bb42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2bb430: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bb430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb434: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2BB434u;
    SET_GPR_U32(ctx, 31, 0x2BB43Cu);
    ctx->pc = 0x2BB438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB434u;
    // 0x2bb438: 0x2407014b  addiu       $a3, $zero, 0x14B (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 331));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CE8u, 0x2BB434u, 0x2BB43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB43Cu;
label_2bb43c:
    // 0x2bb43c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bb43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb440: 0xc0aed22  jal         func_2BB488
    ctx->pc = 0x2BB440u;
    SET_GPR_U32(ctx, 31, 0x2BB448u);
    ctx->pc = 0x2BB444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB440u;
    // 0x2bb444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB488u, 0x2BB440u, 0x2BB448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB448u;
label_2bb448:
    // 0x2bb448: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bb448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb44c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bb44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb450: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2bb450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2bb454: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2bb454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2bb458: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2BB458u;
    SET_GPR_U32(ctx, 31, 0x2BB460u);
    ctx->pc = 0x2BB45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB458u;
    // 0x2bb45c: 0x2407014d  addiu       $a3, $zero, 0x14D (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 333));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CE8u, 0x2BB458u, 0x2BB460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB460u;
label_2bb460:
    // 0x2bb460: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB460u;
    {
        const bool branch_taken_0x2bb460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB460u;
        // 0x2bb464: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb460) {
            ctx->pc = 0x2BB470u;
            goto label_2bb470;
        }
    }
    ctx->pc = 0x2BB468u;
label_2bb468:
    // 0x2bb468: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bb468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb46c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bb46cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb470:
    // 0x2bb470: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bb470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bb474: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bb474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb478: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bb478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb47c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bb47cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb480: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB480u;
        // 0x2bb484: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB488u;
}
