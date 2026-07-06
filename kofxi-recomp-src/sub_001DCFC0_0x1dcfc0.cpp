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

// Function: sub_001DCFC0
// Address: 0x1dcfc0 - 0x1dd010
void sub_001DCFC0_0x1dcfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCFC0_0x1dcfc0");
#endif

    ctx->pc = 0x1dcfc0u;

    // 0x1dcfc0: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x1dcfc0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1dcfc4: 0x8c8b000c  lw          $t3, 0xC($a0)
    ctx->pc = 0x1dcfc4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dcfc8: 0xa1fc2  srl         $v1, $t2, 31
    ctx->pc = 0x1dcfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x1dcfcc: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1dcfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1dcfd0: 0xb27c2  srl         $a0, $t3, 31
    ctx->pc = 0x1dcfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x1dcfd4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1dcfd4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1dcfd8: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1dcfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1dcfdc: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1dcfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1dcfe0: 0x2463003e  addiu       $v1, $v1, 0x3E
    ctx->pc = 0x1dcfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x1dcfe4: 0x28490000  slti        $t1, $v0, 0x0
    ctx->pc = 0x1dcfe4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dcfe8: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x1dcfe8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1dcfec: 0x69100b  movn        $v0, $v1, $t1
    ctx->pc = 0x1dcfecu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1dcff0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1dcff0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1dcff4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1dcff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1dcff8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1dcff8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1dcffc: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x1dcffcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x1dd000: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x1dd000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x1dd004: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD004u;
        // 0x1dd008: 0xaccb0000  sw          $t3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD00Cu;
    // 0x1dd00c: 0x0  nop
    ctx->pc = 0x1dd00cu;
    // NOP
}
