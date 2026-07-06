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

// Function: sub_0022C238
// Address: 0x22c238 - 0x22c328
void sub_0022C238_0x22c238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C238_0x22c238");
#endif

    switch (ctx->pc) {
        case 0x22c2bcu: goto label_22c2bc;
        case 0x22c2c8u: goto label_22c2c8;
        case 0x22c2d0u: goto label_22c2d0;
        case 0x22c2d8u: goto label_22c2d8;
        default: break;
    }

    ctx->pc = 0x22c238u;

    // 0x22c238: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22c238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22c23c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22c23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22c240: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22c240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22c244: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22c244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c248: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22c248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22c24c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22c24cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c250: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22c250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22c254: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22c254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c25c: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x22c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x22c260: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x22c260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x22c264: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x22c264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c268: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x22c268u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x22c26c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x22c26cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x22c270: 0x3045003f  andi        $a1, $v0, 0x3F
    ctx->pc = 0x22c270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x22c274: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C274u;
    {
        const bool branch_taken_0x22c274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C274u;
        // 0x22c278: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c274) {
            ctx->pc = 0x22C288u;
            goto label_22c288;
        }
    }
    ctx->pc = 0x22C27Cu;
    // 0x22c27c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x22c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x22c280: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c284: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x22c284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_22c288:
    // 0x22c288: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x22c288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x22c28c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x22c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22c290: 0x122742  srl         $a0, $s2, 29
    ctx->pc = 0x22c290u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x22c294: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x22c294u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22c298: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22c298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22c29c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x22c29cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x22c2a0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x22C2A0u;
    {
        const bool branch_taken_0x22c2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2A0u;
        // 0x22c2a4: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2a0) {
            ctx->pc = 0x22C2F4u;
            goto label_22c2f4;
        }
    }
    ctx->pc = 0x22C2A8u;
    // 0x22c2a8: 0x24a40018  addiu       $a0, $a1, 0x18
    ctx->pc = 0x22c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x22c2ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22c2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c2b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22c2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c2b4: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x22C2B4u;
    SET_GPR_U32(ctx, 31, 0x22C2BCu);
    ctx->pc = 0x22C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C2B4u;
    // 0x22c2b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x22C2B4u, 0x22C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2BCu;
label_22c2bc:
    // 0x22c2bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c2c0: 0xc08b0f2  jal         func_22C3C8
    ctx->pc = 0x22C2C0u;
    SET_GPR_U32(ctx, 31, 0x22C2C8u);
    ctx->pc = 0x22C2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C2C0u;
    // 0x22c2c4: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C3C8u, 0x22C2C0u, 0x22C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2C8u;
label_22c2c8:
    // 0x22c2c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22C2C8u;
    {
        const bool branch_taken_0x22c2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2C8u;
        // 0x22c2cc: 0x2602003f  addiu       $v0, $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2c8) {
            ctx->pc = 0x22C2E0u;
            goto label_22c2e0;
        }
    }
    ctx->pc = 0x22C2D0u;
label_22c2d0:
    // 0x22c2d0: 0xc08b0f2  jal         func_22C3C8
    ctx->pc = 0x22C2D0u;
    SET_GPR_U32(ctx, 31, 0x22C2D8u);
    ctx->pc = 0x22C2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C2D0u;
    // 0x22c2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C3C8u, 0x22C2D0u, 0x22C2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2D8u;
label_22c2d8:
    // 0x22c2d8: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x22c2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x22c2dc: 0x2602003f  addiu       $v0, $s0, 0x3F
    ctx->pc = 0x22c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_22c2e0:
    // 0x22c2e0: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x22c2e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x22c2e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22C2E4u;
    {
        const bool branch_taken_0x22c2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2E4u;
        // 0x22c2e8: 0x2702821  addu        $a1, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2e4) {
            ctx->pc = 0x22C2D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c2d0;
        }
    }
    ctx->pc = 0x22C2ECu;
    // 0x22c2ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22C2ECu;
    {
        const bool branch_taken_0x22c2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2ECu;
        // 0x22c2f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2ec) {
            ctx->pc = 0x22C2F8u;
            goto label_22c2f8;
        }
    }
    ctx->pc = 0x22C2F4u;
label_22c2f4:
    // 0x22c2f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22c2f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c2f8:
    // 0x22c2f8: 0x24a40018  addiu       $a0, $a1, 0x18
    ctx->pc = 0x22c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x22c2fc: 0x2503023  subu        $a2, $s2, $s0
    ctx->pc = 0x22c2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x22c300: 0x2702821  addu        $a1, $s3, $s0
    ctx->pc = 0x22c300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x22c304: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x22c304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x22c308: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22c308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c30c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22c30cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c310: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22c310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c314: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22c314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c31c: 0x808b538  j           func_22D4E0
    ctx->pc = 0x22C31Cu;
    ctx->pc = 0x22C320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C31Cu;
    // 0x22c320: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    sub_0022D4E0_0x22d4e0(rdram, ctx, runtime); return;
    ctx->pc = 0x22C324u;
    // 0x22c324: 0x0  nop
    ctx->pc = 0x22c324u;
    // NOP
}
