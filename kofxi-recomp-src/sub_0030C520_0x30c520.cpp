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

// Function: sub_0030C520
// Address: 0x30c520 - 0x30c5b0
void sub_0030C520_0x30c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C520_0x30c520");
#endif

    switch (ctx->pc) {
        case 0x30c550u: goto label_30c550;
        case 0x30c578u: goto label_30c578;
        case 0x30c58cu: goto label_30c58c;
        default: break;
    }

    ctx->pc = 0x30c520u;

    // 0x30c520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30c524: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x30c524u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x30c528: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30c528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30c52c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30c52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30c530: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30c534: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x30c534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c53c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30c53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c540: 0x3c0401d1  lui         $a0, 0x1D1
    ctx->pc = 0x30c540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)465 << 16));
    // 0x30c544: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30c544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c548: 0xc049c48  jal         func_127120
    ctx->pc = 0x30C548u;
    SET_GPR_U32(ctx, 31, 0x30C550u);
    ctx->pc = 0x30C54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C548u;
    // 0x30c54c: 0x24841e00  addiu       $a0, $a0, 0x1E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x30C548u, 0x30C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C550u;
label_30c550:
    // 0x30c550: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x30c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30c554: 0x128a00  sll         $s1, $s2, 8
    ctx->pc = 0x30c554u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x30c558: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x30c558u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x30c55c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30c55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c560: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x30c560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x30c564: 0x39200  sll         $s2, $v1, 8
    ctx->pc = 0x30c564u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x30c568: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x30c568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x30c56c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30c56cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c570: 0xc049c48  jal         func_127120
    ctx->pc = 0x30C570u;
    SET_GPR_U32(ctx, 31, 0x30C578u);
    ctx->pc = 0x30C574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C570u;
    // 0x30c574: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x30C570u, 0x30C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C578u;
label_30c578:
    // 0x30c578: 0x3c0501d1  lui         $a1, 0x1D1
    ctx->pc = 0x30c578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)465 << 16));
    // 0x30c57c: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x30c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x30c580: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x30c580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c584: 0xc049c48  jal         func_127120
    ctx->pc = 0x30C584u;
    SET_GPR_U32(ctx, 31, 0x30C58Cu);
    ctx->pc = 0x30C588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C584u;
    // 0x30c588: 0x24a51e00  addiu       $a1, $a1, 0x1E00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x30C584u, 0x30C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C58Cu;
label_30c58c:
    // 0x30c58c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30c58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c590: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30c590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c594: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c59c: 0x3e00008  jr          $ra
    ctx->pc = 0x30C59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C59Cu;
        // 0x30c5a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C5A4u;
    // 0x30c5a4: 0x0  nop
    ctx->pc = 0x30c5a4u;
    // NOP
    // 0x30c5a8: 0x0  nop
    ctx->pc = 0x30c5a8u;
    // NOP
    // 0x30c5ac: 0x0  nop
    ctx->pc = 0x30c5acu;
    // NOP
}
