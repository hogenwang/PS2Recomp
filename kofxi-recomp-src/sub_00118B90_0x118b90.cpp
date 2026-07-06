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

// Function: sub_00118B90
// Address: 0x118b90 - 0x118db0
void sub_00118B90_0x118b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118B90_0x118b90");
#endif

    switch (ctx->pc) {
        case 0x118bd8u: goto label_118bd8;
        case 0x118c04u: goto label_118c04;
        case 0x118c18u: goto label_118c18;
        case 0x118c44u: goto label_118c44;
        case 0x118c6cu: goto label_118c6c;
        case 0x118c74u: goto label_118c74;
        case 0x118c84u: goto label_118c84;
        case 0x118cc0u: goto label_118cc0;
        case 0x118d30u: goto label_118d30;
        case 0x118d74u: goto label_118d74;
        case 0x118d7cu: goto label_118d7c;
        default: break;
    }

    ctx->pc = 0x118b90u;

    // 0x118b90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x118b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x118b94: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x118b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x118b98: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x118b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x118b9c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x118b9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ba0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x118ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x118ba4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x118ba4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ba8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x118ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x118bac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x118bacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118bb0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x118bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x118bb4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118bb8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118bbc: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x118BBCu;
    {
        const bool branch_taken_0x118bbc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x118BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118BBCu;
        // 0x118bc0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118bbc) {
            ctx->pc = 0x118BD0u;
            goto label_118bd0;
        }
    }
    ctx->pc = 0x118BC4u;
    // 0x118bc4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118bc8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x118BC8u;
    {
        const bool branch_taken_0x118bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118BC8u;
        // 0x118bcc: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118bc8) {
            ctx->pc = 0x118C94u;
            goto label_118c94;
        }
    }
    ctx->pc = 0x118BD0u;
label_118bd0:
    // 0x118bd0: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x118BD0u;
    SET_GPR_U32(ctx, 31, 0x118BD8u);
    ctx->pc = 0x118BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118BD0u;
    // 0x118bd4: 0x3c120041  lui         $s2, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x118BD0u, 0x118BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118BD8u;
label_118bd8:
    // 0x118bd8: 0x8e50d540  lw          $s0, -0x2AC0($s2)
    ctx->pc = 0x118bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956352)));
    // 0x118bdc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118BDCu;
    {
        const bool branch_taken_0x118bdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x118BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118BDCu;
        // 0x118be0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118bdc) {
            ctx->pc = 0x118BECu;
            goto label_118bec;
        }
    }
    ctx->pc = 0x118BE4u;
    // 0x118be4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x118be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x118be8: 0xae42d540  sw          $v0, -0x2AC0($s2)
    ctx->pc = 0x118be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294956352), GPR_U32(ctx, 2));
label_118bec:
    // 0x118bec: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x118BECu;
    {
        const bool branch_taken_0x118bec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x118bec) {
            ctx->pc = 0x118C10u;
            goto label_118c10;
        }
    }
    ctx->pc = 0x118BF4u;
    // 0x118bf4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x118BF4u;
    {
        const bool branch_taken_0x118bf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x118bf4) {
            ctx->pc = 0x118C04u;
            goto label_118c04;
        }
    }
    ctx->pc = 0x118BFCu;
    // 0x118bfc: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x118BFCu;
    SET_GPR_U32(ctx, 31, 0x118C04u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x118BFCu, 0x118C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C04u;
label_118c04:
    // 0x118c04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118c08: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x118C08u;
    {
        const bool branch_taken_0x118c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C08u;
        // 0x118c0c: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c08) {
            ctx->pc = 0x118C94u;
            goto label_118c94;
        }
    }
    ctx->pc = 0x118C10u;
label_118c10:
    // 0x118c10: 0xc046052  jal         func_118148
    ctx->pc = 0x118C10u;
    SET_GPR_U32(ctx, 31, 0x118C18u);
    ctx->pc = 0x118148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118148u, 0x118C10u, 0x118C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C18u;
label_118c18:
    // 0x118c18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x118c18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c1c: 0x623000b  bgezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x118C1Cu;
    {
        const bool branch_taken_0x118c1c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x118c1c) {
            ctx->pc = 0x118C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118C1Cu;
            // 0x118c20: 0xae140008  sw          $s4, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118C4Cu;
            goto label_118c4c;
        }
    }
    ctx->pc = 0x118C24u;
    // 0x118c24: 0x8e42d540  lw          $v0, -0x2AC0($s2)
    ctx->pc = 0x118c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956352)));
    // 0x118c28: 0xae50d540  sw          $s0, -0x2AC0($s2)
    ctx->pc = 0x118c28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294956352), GPR_U32(ctx, 16));
    // 0x118c2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x118c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x118c30: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x118c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x118c34: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x118C34u;
    {
        const bool branch_taken_0x118c34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C34u;
        // 0x118c38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c34) {
            ctx->pc = 0x118C94u;
            goto label_118c94;
        }
    }
    ctx->pc = 0x118C3Cu;
    // 0x118c3c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x118C3Cu;
    SET_GPR_U32(ctx, 31, 0x118C44u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x118C3Cu, 0x118C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C44u;
label_118c44:
    // 0x118c44: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x118C44u;
    {
        const bool branch_taken_0x118c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C44u;
        // 0x118c48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c44) {
            ctx->pc = 0x118C94u;
            goto label_118c94;
        }
    }
    ctx->pc = 0x118C4Cu;
label_118c4c:
    // 0x118c4c: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x118c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x118c50: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x118c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x118c54: 0x24c68b30  addiu       $a2, $a2, -0x74D0
    ctx->pc = 0x118c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937392));
    // 0x118c58: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x118c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x118c5c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x118c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c64: 0xc04622e  jal         func_1188B8
    ctx->pc = 0x118C64u;
    SET_GPR_U32(ctx, 31, 0x118C6Cu);
    ctx->pc = 0x118C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C64u;
    // 0x118c68: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1188B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1188B8u, 0x118C64u, 0x118C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C6Cu;
label_118c6c:
    // 0x118c6c: 0xc046100  jal         func_118400
    ctx->pc = 0x118C6Cu;
    SET_GPR_U32(ctx, 31, 0x118C74u);
    ctx->pc = 0x118C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C6Cu;
    // 0x118c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118400u, 0x118C6Cu, 0x118C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C74u;
label_118c74:
    // 0x118c74: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x118C74u;
    {
        const bool branch_taken_0x118c74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C74u;
        // 0x118c78: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c74) {
            ctx->pc = 0x118C88u;
            goto label_118c88;
        }
    }
    ctx->pc = 0x118C7Cu;
    // 0x118c7c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x118C7Cu;
    SET_GPR_U32(ctx, 31, 0x118C84u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x118C7Cu, 0x118C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C84u;
label_118c84:
    // 0x118c84: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x118c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_118c88:
    // 0x118c88: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x118c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x118c8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x118c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x118c90: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x118c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_118c94:
    // 0x118c94: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x118c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118c98: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x118c98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x118c9c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x118c9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118ca0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x118ca0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118ca4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x118ca4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118ca8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118ca8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118cac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118cb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x118CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CB4u;
        // 0x118cb8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118CBCu;
    // 0x118cbc: 0x0  nop
    ctx->pc = 0x118cbcu;
    // NOP
label_118cc0:
    // 0x118cc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x118cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x118cc4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x118cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x118cc8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x118cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x118ccc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x118cccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118cd0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x118cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x118cd4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x118cd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118cd8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x118cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x118cdc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x118cdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ce0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118ce4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118ce8: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x118CE8u;
    {
        const bool branch_taken_0x118ce8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x118CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CE8u;
        // 0x118cec: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ce8) {
            ctx->pc = 0x118CFCu;
            goto label_118cfc;
        }
    }
    ctx->pc = 0x118CF0u;
    // 0x118cf0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118cf4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x118CF4u;
    {
        const bool branch_taken_0x118cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CF4u;
        // 0x118cf8: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cf4) {
            ctx->pc = 0x118D8Cu;
            goto label_118d8c;
        }
    }
    ctx->pc = 0x118CFCu;
label_118cfc:
    // 0x118cfc: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x118cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
    // 0x118d00: 0x8e50d540  lw          $s0, -0x2AC0($s2)
    ctx->pc = 0x118d00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956352)));
    // 0x118d04: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118D04u;
    {
        const bool branch_taken_0x118d04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x118d04) {
            ctx->pc = 0x118D14u;
            goto label_118d14;
        }
    }
    ctx->pc = 0x118D0Cu;
    // 0x118d0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x118d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x118d10: 0xae42d540  sw          $v0, -0x2AC0($s2)
    ctx->pc = 0x118d10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294956352), GPR_U32(ctx, 2));
label_118d14:
    // 0x118d14: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118D14u;
    {
        const bool branch_taken_0x118d14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x118d14) {
            ctx->pc = 0x118D28u;
            goto label_118d28;
        }
    }
    ctx->pc = 0x118D1Cu;
    // 0x118d1c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118d20: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x118D20u;
    {
        const bool branch_taken_0x118d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D20u;
        // 0x118d24: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d20) {
            ctx->pc = 0x118D8Cu;
            goto label_118d8c;
        }
    }
    ctx->pc = 0x118D28u;
label_118d28:
    // 0x118d28: 0xc046036  jal         func_1180D8
    ctx->pc = 0x118D28u;
    SET_GPR_U32(ctx, 31, 0x118D30u);
    ctx->pc = 0x1180D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180D8u, 0x118D28u, 0x118D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D30u;
label_118d30:
    // 0x118d30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x118d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d34: 0x6230007  bgezl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x118D34u;
    {
        const bool branch_taken_0x118d34 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x118d34) {
            ctx->pc = 0x118D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118D34u;
            // 0x118d38: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118D54u;
            goto label_118d54;
        }
    }
    ctx->pc = 0x118D3Cu;
    // 0x118d3c: 0x8e43d540  lw          $v1, -0x2AC0($s2)
    ctx->pc = 0x118d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956352)));
    // 0x118d40: 0xae50d540  sw          $s0, -0x2AC0($s2)
    ctx->pc = 0x118d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294956352), GPR_U32(ctx, 16));
    // 0x118d44: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x118d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x118d48: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x118d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x118d4c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x118D4Cu;
    {
        const bool branch_taken_0x118d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D4Cu;
        // 0x118d50: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d4c) {
            ctx->pc = 0x118D90u;
            goto label_118d90;
        }
    }
    ctx->pc = 0x118D54u;
label_118d54:
    // 0x118d54: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x118d54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x118d58: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x118d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x118d5c: 0x24c68b30  addiu       $a2, $a2, -0x74D0
    ctx->pc = 0x118d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937392));
    // 0x118d60: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x118d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x118d64: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x118d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d6c: 0xc0461ea  jal         func_1187A8
    ctx->pc = 0x118D6Cu;
    SET_GPR_U32(ctx, 31, 0x118D74u);
    ctx->pc = 0x118D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D6Cu;
    // 0x118d70: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A8u, 0x118D6Cu, 0x118D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D74u;
label_118d74:
    // 0x118d74: 0xc0460d4  jal         func_118350
    ctx->pc = 0x118D74u;
    SET_GPR_U32(ctx, 31, 0x118D7Cu);
    ctx->pc = 0x118D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D74u;
    // 0x118d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118350u, 0x118D74u, 0x118D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D7Cu;
label_118d7c:
    // 0x118d7c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x118d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x118d80: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x118d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x118d84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x118d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x118d88: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x118d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_118d8c:
    // 0x118d8c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x118d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_118d90:
    // 0x118d90: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x118d90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118d94: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x118d94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118d98: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x118d98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118d9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118d9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118da0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118da0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118da4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118da8: 0x3e00008  jr          $ra
    ctx->pc = 0x118DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DA8u;
        // 0x118dac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118DB0u;
}
