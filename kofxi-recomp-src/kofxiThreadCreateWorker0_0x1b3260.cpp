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

// Function: kofxiThreadCreateWorker0
// Address: 0x1b3260 - 0x1b3308
void kofxiThreadCreateWorker0_0x1b3260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiThreadCreateWorker0_0x1b3260");
#endif

    switch (ctx->pc) {
        case 0x1b32acu: goto label_1b32ac;
        case 0x1b32c8u: goto label_1b32c8;
        case 0x1b32e0u: goto label_1b32e0;
        case 0x1b32f4u: goto label_1b32f4;
        default: break;
    }

    ctx->pc = 0x1b3260u;

    // 0x1b3260: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b3260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b3264: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b3264u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b3268: 0x8c47a928  lw          $a3, -0x56D8($v0)
    ctx->pc = 0x1b3268u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945064)));
    // 0x1b326c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b326cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b3270: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b3270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b3274: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b3274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b3278: 0x24a52be8  addiu       $a1, $a1, 0x2BE8
    ctx->pc = 0x1b3278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11240));
    // 0x1b327c: 0x24633120  addiu       $v1, $v1, 0x3120
    ctx->pc = 0x1b327cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12576));
    // 0x1b3280: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b3280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3284: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x1b3284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1b3288: 0x2442d6f0  addiu       $v0, $v0, -0x2910
    ctx->pc = 0x1b3288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956784));
    // 0x1b328c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1b328cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1b3290: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1b3290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1b3294: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1b3294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1b3298: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b3298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b329c: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x1b329cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x1b32a0: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x1b32a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x1b32a4: 0xc043298  jal         func_10CA60
    ctx->pc = 0x1B32A4u;
    SET_GPR_U32(ctx, 31, 0x1B32ACu);
    ctx->pc = 0x1B32A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32A4u;
    // 0x1b32a8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA60u, 0x1B32A4u, 0x1B32ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32ACu;
label_1b32ac:
    // 0x1b32ac: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b32acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b32b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b32b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32b4: 0x24703088  addiu       $s0, $v1, 0x3088
    ctx->pc = 0x1b32b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12424));
    // 0x1b32b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b32b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b32bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b32c0: 0xc043768  jal         func_10DDA0
    ctx->pc = 0x1B32C0u;
    SET_GPR_U32(ctx, 31, 0x1B32C8u);
    ctx->pc = 0x1B32C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32C0u;
    // 0x1b32c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDA0u, 0x1B32C0u, 0x1B32C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32C8u;
label_1b32c8:
    // 0x1b32c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b32c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b32cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B32CCu;
    {
        const bool branch_taken_0x1b32cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32CCu;
        // 0x1b32d0: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32cc) {
            ctx->pc = 0x1B32E8u;
            goto label_1b32e8;
        }
    }
    ctx->pc = 0x1B32D4u;
    // 0x1b32d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b32d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b32d8: 0xc06cc80  jal         func_1B3200
    ctx->pc = 0x1B32D8u;
    SET_GPR_U32(ctx, 31, 0x1B32E0u);
    ctx->pc = 0x1B3200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3200u, 0x1B32D8u, 0x1B32E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32E0u;
label_1b32e0:
    // 0x1b32e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b32e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b32e4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b32e8:
    // 0x1b32e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b32e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b32ec: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B32ECu;
    SET_GPR_U32(ctx, 31, 0x1B32F4u);
    ctx->pc = 0x1B32F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32ECu;
    // 0x1b32f0: 0x8c453004  lw          $a1, 0x3004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x1B32ECu, 0x1B32F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32F4u;
label_1b32f4:
    // 0x1b32f4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1b32f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b32f8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b32f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b32fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B32FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32FCu;
        // 0x1b3300: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B32FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3304u;
    // 0x1b3304: 0x0  nop
    ctx->pc = 0x1b3304u;
    // NOP
    if (ctx->pc == 0x1b3304u) { ctx->pc = 0x1b3308u; }
}
