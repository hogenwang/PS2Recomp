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

// Function: sub_0014E250
// Address: 0x14e250 - 0x14e340
void sub_0014E250_0x14e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E250_0x14e250");
#endif

    switch (ctx->pc) {
        case 0x14e2a8u: goto label_14e2a8;
        case 0x14e2ccu: goto label_14e2cc;
        case 0x14e320u: goto label_14e320;
        default: break;
    }

    ctx->pc = 0x14e250u;

    // 0x14e250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14e254: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x14e254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x14e258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14e258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14e25c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e260: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e264: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x14E264u;
    {
        const bool branch_taken_0x14e264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E264u;
        // 0x14e268: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e264) {
            ctx->pc = 0x14E2F0u;
            goto label_14e2f0;
        }
    }
    ctx->pc = 0x14E26Cu;
    // 0x14e26c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E26Cu;
    {
        const bool branch_taken_0x14e26c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e26c) {
            ctx->pc = 0x14E270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E26Cu;
            // 0x14e270: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E27Cu;
            goto label_14e27c;
        }
    }
    ctx->pc = 0x14E274u;
    // 0x14e274: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x14E274u;
    {
        const bool branch_taken_0x14e274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E274u;
        // 0x14e278: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e274) {
            ctx->pc = 0x14E330u;
            goto label_14e330;
        }
    }
    ctx->pc = 0x14E27Cu;
label_14e27c:
    // 0x14e27c: 0x2a010020  slti        $at, $s0, 0x20
    ctx->pc = 0x14e27cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x14e280: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x14E280u;
    {
        const bool branch_taken_0x14e280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e280) {
            ctx->pc = 0x14E32Cu;
            goto label_14e32c;
        }
    }
    ctx->pc = 0x14E288u;
    // 0x14e288: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x14e288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x14e28c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14e28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14e290: 0x2442ea30  addiu       $v0, $v0, -0x15D0
    ctx->pc = 0x14e290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961712));
    // 0x14e294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e29c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14e29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e2a0: 0xc067dac  jal         func_19F6B0
    ctx->pc = 0x14E2A0u;
    SET_GPR_U32(ctx, 31, 0x14E2A8u);
    ctx->pc = 0x14E2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2A0u;
    // 0x14e2a4: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F6B0u, 0x14E2A0u, 0x14E2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2A8u;
label_14e2a8:
    // 0x14e2a8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x14e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x14e2ac: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x14e2acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x14e2b0: 0x2463eac0  addiu       $v1, $v1, -0x1540
    ctx->pc = 0x14e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961856));
    // 0x14e2b4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x14e2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x14e2b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14e2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e2bc: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x14E2BCu;
    {
        const bool branch_taken_0x14e2bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e2bc) {
            ctx->pc = 0x14E32Cu;
            goto label_14e32c;
        }
    }
    ctx->pc = 0x14E2C4u;
    // 0x14e2c4: 0xc055728  jal         func_155CA0
    ctx->pc = 0x14E2C4u;
    SET_GPR_U32(ctx, 31, 0x14E2CCu);
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x14E2C4u, 0x14E2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2CCu;
label_14e2cc:
    // 0x14e2cc: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x14e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x14e2d0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x14e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x14e2d4: 0x2484eac0  addiu       $a0, $a0, -0x1540
    ctx->pc = 0x14e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961856));
    // 0x14e2d8: 0x2463eac4  addiu       $v1, $v1, -0x153C
    ctx->pc = 0x14e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961860));
    // 0x14e2dc: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x14e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x14e2e0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x14e2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x14e2e4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x14e2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x14e2e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14E2E8u;
    {
        const bool branch_taken_0x14e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2E8u;
        // 0x14e2ec: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e2e8) {
            ctx->pc = 0x14E32Cu;
            goto label_14e32c;
        }
    }
    ctx->pc = 0x14E2F0u;
label_14e2f0:
    // 0x14e2f0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x14e2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x14e2f4: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x14e2f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14e2f8: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x14E2F8u;
    {
        const bool branch_taken_0x14e2f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e2f8) {
            ctx->pc = 0x14E32Cu;
            goto label_14e32c;
        }
    }
    ctx->pc = 0x14E300u;
    // 0x14e300: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x14e300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x14e304: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x14e304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x14e308: 0x2484e180  addiu       $a0, $a0, -0x1E80
    ctx->pc = 0x14e308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959488));
    // 0x14e30c: 0x24a5cfc0  addiu       $a1, $a1, -0x3040
    ctx->pc = 0x14e30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954944));
    // 0x14e310: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x14e310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x14e314: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x14e314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x14e318: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x14E318u;
    SET_GPR_U32(ctx, 31, 0x14E320u);
    ctx->pc = 0x14E31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E318u;
    // 0x14e31c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x14E318u, 0x14E320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E320u;
label_14e320:
    // 0x14e320: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x14e320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14e324: 0xa0600020  sb          $zero, 0x20($v1)
    ctx->pc = 0x14e324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x14e328: 0xa0700008  sb          $s0, 0x8($v1)
    ctx->pc = 0x14e328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 16));
label_14e32c:
    // 0x14e32c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14e32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14e330:
    // 0x14e330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e334: 0x3e00008  jr          $ra
    ctx->pc = 0x14E334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E334u;
        // 0x14e338: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E33Cu;
    // 0x14e33c: 0x0  nop
    ctx->pc = 0x14e33cu;
    // NOP
}
