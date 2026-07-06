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

// Function: sub_00156280
// Address: 0x156280 - 0x156340
void sub_00156280_0x156280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156280_0x156280");
#endif

    switch (ctx->pc) {
        case 0x1562ccu: goto label_1562cc;
        case 0x1562dcu: goto label_1562dc;
        case 0x156314u: goto label_156314;
        default: break;
    }

    ctx->pc = 0x156280u;

    // 0x156280: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x156280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x156284: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x156284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x156288: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x156288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15628c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15628cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x156290: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x156290u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156294: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x156294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x156298: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x156298u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15629c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15629cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1562a0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1562a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1562a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1562a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1562a8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1562a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1562ac: 0x3c100093  lui         $s0, 0x93
    ctx->pc = 0x1562acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)147 << 16));
    // 0x1562b0: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x1562B0u;
    {
        const bool branch_taken_0x1562b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1562B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1562B0u;
        // 0x1562b4: 0x2610f780  addiu       $s0, $s0, -0x880 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1562b0) {
            ctx->pc = 0x1562E4u;
            goto label_1562e4;
        }
    }
    ctx->pc = 0x1562B8u;
    // 0x1562b8: 0x2663001f  addiu       $v1, $s3, 0x1F
    ctx->pc = 0x1562b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 31));
    // 0x1562bc: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x1562bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1562c0: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x1562c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1562c4: 0xc069368  jal         func_1A4DA0
    ctx->pc = 0x1562C4u;
    SET_GPR_U32(ctx, 31, 0x1562CCu);
    ctx->pc = 0x1562C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1562C4u;
    // 0x1562c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DA0u, 0x1562C4u, 0x1562CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1562CCu;
label_1562cc:
    // 0x1562cc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1562CCu;
    {
        const bool branch_taken_0x1562cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1562cc) {
            ctx->pc = 0x1562D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1562CCu;
            // 0x1562d0: 0xae140008  sw          $s4, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1562ECu;
            goto label_1562ec;
        }
    }
    ctx->pc = 0x1562D4u;
    // 0x1562d4: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x1562D4u;
    SET_GPR_U32(ctx, 31, 0x1562DCu);
    ctx->pc = 0x1562D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1562D4u;
    // 0x1562d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DB0u, 0x1562D4u, 0x1562DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1562DCu;
label_1562dc:
    // 0x1562dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1562DCu;
    {
        const bool branch_taken_0x1562dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1562E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1562DCu;
        // 0x1562e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1562dc) {
            ctx->pc = 0x156318u;
            goto label_156318;
        }
    }
    ctx->pc = 0x1562E4u;
label_1562e4:
    // 0x1562e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1562e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1562e8: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x1562e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
label_1562ec:
    // 0x1562ec: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1562ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1562f0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1562f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1562f4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1562F4u;
    {
        const bool branch_taken_0x1562f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1562F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1562F4u;
        // 0x1562f8: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1562f4) {
            ctx->pc = 0x156314u;
            goto label_156314;
        }
    }
    ctx->pc = 0x1562FCu;
    // 0x1562fc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1562FCu;
    {
        const bool branch_taken_0x1562fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1562fc) {
            ctx->pc = 0x156300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1562FCu;
            // 0x156300: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156318u;
            goto label_156318;
        }
    }
    ctx->pc = 0x156304u;
    // 0x156304: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x156304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156308: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x156308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15630c: 0xc067d60  jal         func_19F580
    ctx->pc = 0x15630Cu;
    SET_GPR_U32(ctx, 31, 0x156314u);
    ctx->pc = 0x156310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15630Cu;
    // 0x156310: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F580u, 0x15630Cu, 0x156314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156314u;
label_156314:
    // 0x156314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156318:
    // 0x156318: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x156318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15631c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15631cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x156320: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x156320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156324: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x156324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x156328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15632c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15632cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156330: 0x3e00008  jr          $ra
    ctx->pc = 0x156330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156330u;
        // 0x156334: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156338u;
    // 0x156338: 0x0  nop
    ctx->pc = 0x156338u;
    // NOP
    // 0x15633c: 0x0  nop
    ctx->pc = 0x15633cu;
    // NOP
}
