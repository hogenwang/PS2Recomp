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

// Function: sub_001EAD38
// Address: 0x1ead38 - 0x1eada0
void sub_001EAD38_0x1ead38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAD38_0x1ead38");
#endif

    switch (ctx->pc) {
        case 0x1ead78u: goto label_1ead78;
        case 0x1ead88u: goto label_1ead88;
        default: break;
    }

    ctx->pc = 0x1ead38u;

    // 0x1ead38: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1ead38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ead3c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ead3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ead40: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1ead40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ead44: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ead44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ead48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ead48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ead4c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ead4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ead50: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ead50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ead54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ead54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ead58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ead58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ead5c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1ead5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead60: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1ead60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ead64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ead64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ead68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead6c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ead6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ead70: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1EAD70u;
    SET_GPR_U32(ctx, 31, 0x1EAD78u);
    ctx->pc = 0x1EAD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAD70u;
    // 0x1ead74: 0x26101390  addiu       $s0, $s0, 0x1390 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED9C0u, 0x1EAD70u, 0x1EAD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAD78u;
label_1ead78:
    // 0x1ead78: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1ead78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1ead7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ead7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead80: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1EAD80u;
    SET_GPR_U32(ctx, 31, 0x1EAD88u);
    ctx->pc = 0x1EAD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAD80u;
    // 0x1ead84: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED9D8u, 0x1EAD80u, 0x1EAD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAD88u;
label_1ead88:
    // 0x1ead88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ead88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ead8c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ead8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ead90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ead90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ead94: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ead94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ead98: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD98u;
        // 0x1ead9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EADA0u;
}
