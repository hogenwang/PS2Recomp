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

// Function: sub_002AA720
// Address: 0x2aa720 - 0x2aa7e8
void sub_002AA720_0x2aa720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA720_0x2aa720");
#endif

    switch (ctx->pc) {
        case 0x2aa754u: goto label_2aa754;
        case 0x2aa760u: goto label_2aa760;
        case 0x2aa778u: goto label_2aa778;
        case 0x2aa7d0u: goto label_2aa7d0;
        default: break;
    }

    ctx->pc = 0x2aa720u;

    // 0x2aa720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2aa720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2aa724: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2aa724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2aa728: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aa728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aa72c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2aa72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa730: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2aa730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2aa734: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aa734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa738: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2aa738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2aa73c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x2aa73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2aa740: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x2aa740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2aa744: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AA744u;
    {
        const bool branch_taken_0x2aa744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA744u;
        // 0x2aa748: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa744) {
            ctx->pc = 0x2AA7A0u;
            goto label_2aa7a0;
        }
    }
    ctx->pc = 0x2AA74Cu;
    // 0x2aa74c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA74Cu;
    {
        const bool branch_taken_0x2aa74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA74Cu;
        // 0x2aa750: 0x8e120048  lw          $s2, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa74c) {
            ctx->pc = 0x2AA760u;
            goto label_2aa760;
        }
    }
    ctx->pc = 0x2AA754u;
label_2aa754:
    // 0x2aa754: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2AA754u;
    {
        const bool branch_taken_0x2aa754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA754u;
        // 0x2aa758: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa754) {
            ctx->pc = 0x2AA7A0u;
            goto label_2aa7a0;
        }
    }
    ctx->pc = 0x2AA75Cu;
    // 0x2aa75c: 0x0  nop
    ctx->pc = 0x2aa75cu;
    // NOP
label_2aa760:
    // 0x2aa760: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2aa760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aa764: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2aa764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2aa768: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2aa768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2aa76c: 0x2233023  subu        $a2, $s1, $v1
    ctx->pc = 0x2aa76cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2aa770: 0xc0a1468  jal         func_2851A0
    ctx->pc = 0x2AA770u;
    SET_GPR_U32(ctx, 31, 0x2AA778u);
    ctx->pc = 0x2AA774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA770u;
    // 0x2aa774: 0x2432821  addu        $a1, $s2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851A0u, 0x2AA770u, 0x2AA778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA778u;
label_2aa778:
    // 0x2aa778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aa778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa77c: 0x1880fff5  blez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2AA77Cu;
    {
        const bool branch_taken_0x2aa77c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2AA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA77Cu;
        // 0x2aa780: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa77c) {
            ctx->pc = 0x2AA754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa754;
        }
    }
    ctx->pc = 0x2AA784u;
    // 0x2aa784: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2aa784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2aa788: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2aa788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2aa78c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2aa78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2aa790: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x2aa790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2aa794: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2AA794u;
    {
        const bool branch_taken_0x2aa794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA794u;
        // 0x2aa798: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa794) {
            ctx->pc = 0x2AA760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa760;
        }
    }
    ctx->pc = 0x2AA79Cu;
    // 0x2aa79c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2aa79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2aa7a0:
    // 0x2aa7a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2aa7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aa7a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2aa7a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa7a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2aa7a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa7ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aa7acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7B0u;
        // 0x2aa7b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA7B8u;
    // 0x2aa7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aa7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aa7bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2aa7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa7c0: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA7C0u;
    {
        const bool branch_taken_0x2aa7c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7C0u;
        // 0x2aa7c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa7c0) {
            ctx->pc = 0x2AA7D8u;
            goto label_2aa7d8;
        }
    }
    ctx->pc = 0x2AA7C8u;
    // 0x2aa7c8: 0xc0aa9fa  jal         func_2AA7E8
    ctx->pc = 0x2AA7C8u;
    SET_GPR_U32(ctx, 31, 0x2AA7D0u);
    ctx->pc = 0x2AA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA7E8u, 0x2AA7C8u, 0x2AA7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA7D0u;
label_2aa7d0:
    // 0x2aa7d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA7D0u;
    {
        const bool branch_taken_0x2aa7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7D0u;
        // 0x2aa7d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa7d0) {
            ctx->pc = 0x2AA7E0u;
            goto label_2aa7e0;
        }
    }
    ctx->pc = 0x2AA7D8u;
label_2aa7d8:
    // 0x2aa7d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa7d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa7dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aa7e0:
    // 0x2aa7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7E0u;
        // 0x2aa7e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA7E8u;
}
