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

// Function: sub_001AEA40
// Address: 0x1aea40 - 0x1aeac8
void sub_001AEA40_0x1aea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEA40_0x1aea40");
#endif

    switch (ctx->pc) {
        case 0x1aea6cu: goto label_1aea6c;
        case 0x1aea74u: goto label_1aea74;
        case 0x1aea8cu: goto label_1aea8c;
        case 0x1aea94u: goto label_1aea94;
        case 0x1aeaa0u: goto label_1aeaa0;
        default: break;
    }

    ctx->pc = 0x1aea40u;

    // 0x1aea40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aea44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aea44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aea48: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1aea48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aea4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aea50: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1aea50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aea54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aea58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1aea58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1aea5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea60: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aea60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1aea64: 0xc06ba4e  jal         func_1AE938
    ctx->pc = 0x1AEA64u;
    SET_GPR_U32(ctx, 31, 0x1AEA6Cu);
    ctx->pc = 0x1AEA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA64u;
    // 0x1aea68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE938u, 0x1AEA64u, 0x1AEA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA6Cu;
label_1aea6c:
    // 0x1aea6c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1AEA6Cu;
    SET_GPR_U32(ctx, 31, 0x1AEA74u);
    ctx->pc = 0x1AEA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA6Cu;
    // 0x1aea70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1AEA6Cu, 0x1AEA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA74u;
label_1aea74:
    // 0x1aea74: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1aea74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1aea78: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x1aea78u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1aea7c: 0x24a57380  addiu       $a1, $a1, 0x7380
    ctx->pc = 0x1aea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29568));
    // 0x1aea80: 0x2626ffff  addiu       $a2, $s1, -0x1
    ctx->pc = 0x1aea80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1aea84: 0xc04a88c  jal         func_12A230
    ctx->pc = 0x1AEA84u;
    SET_GPR_U32(ctx, 31, 0x1AEA8Cu);
    ctx->pc = 0x1AEA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA84u;
    // 0x1aea88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A230u, 0x1AEA84u, 0x1AEA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA8Cu;
label_1aea8c:
    // 0x1aea8c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1AEA8Cu;
    SET_GPR_U32(ctx, 31, 0x1AEA94u);
    ctx->pc = 0x1AEA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA8Cu;
    // 0x1aea90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1AEA8Cu, 0x1AEA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA94u;
label_1aea94:
    // 0x1aea94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aea94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea98: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1AEA98u;
    SET_GPR_U32(ctx, 31, 0x1AEAA0u);
    ctx->pc = 0x1AEA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA98u;
    // 0x1aea9c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1AEA98u, 0x1AEAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEAA0u;
label_1aeaa0:
    // 0x1aeaa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aeaa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aeaa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aeaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeaa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aeaa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeaac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aeaacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aeab0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1aeab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aeab4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aeab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeab8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aeab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aeabc: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1aeabcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1aeac0: 0x806ba4e  j           func_1AE938
    ctx->pc = 0x1AEAC0u;
    ctx->pc = 0x1AEAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEAC0u;
    // 0x1aeac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE938u;
    sub_001AE938_0x1ae938(rdram, ctx, runtime); return;
    ctx->pc = 0x1AEAC8u;
}
