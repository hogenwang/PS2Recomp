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

// Function: sub_001EDAE8
// Address: 0x1edae8 - 0x1edc38
void sub_001EDAE8_0x1edae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDAE8_0x1edae8");
#endif

    switch (ctx->pc) {
        case 0x1edb1cu: goto label_1edb1c;
        case 0x1edb98u: goto label_1edb98;
        case 0x1edbb0u: goto label_1edbb0;
        case 0x1edbd8u: goto label_1edbd8;
        case 0x1edbe0u: goto label_1edbe0;
        case 0x1edc0cu: goto label_1edc0c;
        default: break;
    }

    ctx->pc = 0x1edae8u;

    // 0x1edae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1edae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1edaec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1edaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1edaf0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1edaf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edaf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1edaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1edaf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1edaf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edafc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1edafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1edb00: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1edb00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edb04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1edb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1edb08: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1edb08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edb0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1edb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1edb10: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1edb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1edb14: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1EDB14u;
    SET_GPR_U32(ctx, 31, 0x1EDB1Cu);
    ctx->pc = 0x1EDB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDB14u;
    // 0x1edb18: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1EDB14u, 0x1EDB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDB1Cu;
label_1edb1c:
    // 0x1edb1c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1edb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1edb20: 0x2623ff44  addiu       $v1, $s1, -0xBC
    ctx->pc = 0x1edb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967108));
    // 0x1edb24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1edb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edb28: 0x34a50171  ori         $a1, $a1, 0x171
    ctx->pc = 0x1edb28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)369);
    // 0x1edb2c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EDB2Cu;
    {
        const bool branch_taken_0x1edb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB2Cu;
        // 0x1edb30: 0x2c630044  sltiu       $v1, $v1, 0x44 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)68) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb2c) {
            ctx->pc = 0x1EDB58u;
            goto label_1edb58;
        }
    }
    ctx->pc = 0x1EDB34u;
    // 0x1edb34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1edb34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edb38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1edb38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1edb3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1edb3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edb40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1edb40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1edb44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1edb44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1edb48: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1edb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1edb4c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EDB4Cu;
    ctx->pc = 0x1EDB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDB4Cu;
    // 0x1edb50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1EDB54u;
    // 0x1edb54: 0x0  nop
    ctx->pc = 0x1edb54u;
    // NOP
label_1edb58:
    // 0x1edb58: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDB58u;
    {
        const bool branch_taken_0x1edb58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edb58) {
            ctx->pc = 0x1EDB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EDB58u;
            // 0x1edb5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EDB7Cu;
            goto label_1edb7c;
        }
    }
    ctx->pc = 0x1EDB60u;
    // 0x1edb60: 0x8e041fd4  lw          $a0, 0x1FD4($s0)
    ctx->pc = 0x1edb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8148)));
    // 0x1edb64: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1edb64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1edb68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1edb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1edb6c: 0xac930150  sw          $s3, 0x150($a0)
    ctx->pc = 0x1edb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 19));
    // 0x1edb70: 0xac72fd50  sw          $s2, -0x2B0($v1)
    ctx->pc = 0x1edb70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966608), GPR_U32(ctx, 18));
    // 0x1edb74: 0xac940154  sw          $s4, 0x154($a0)
    ctx->pc = 0x1edb74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 20));
    // 0x1edb78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1edb78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1edb7c:
    // 0x1edb7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1edb7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1edb80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1edb80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edb84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1edb84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1edb88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1edb88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1edb8c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1edb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1edb90: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB90u;
        // 0x1edb94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDB98u;
label_1edb98:
    // 0x1edb98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDB98u;
    {
        const bool branch_taken_0x1edb98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB98u;
        // 0x1edb9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb98) {
            ctx->pc = 0x1EDBA8u;
            goto label_1edba8;
        }
    }
    ctx->pc = 0x1EDBA0u;
    // 0x1edba0: 0x8c831fd4  lw          $v1, 0x1FD4($a0)
    ctx->pc = 0x1edba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8148)));
    // 0x1edba4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1edba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1edba8:
    // 0x1edba8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDBB0u;
label_1edbb0:
    // 0x1edbb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDBB0u;
    {
        const bool branch_taken_0x1edbb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBB0u;
        // 0x1edbb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbb0) {
            ctx->pc = 0x1EDBC0u;
            goto label_1edbc0;
        }
    }
    ctx->pc = 0x1EDBB8u;
    // 0x1edbb8: 0x8c831fd4  lw          $v1, 0x1FD4($a0)
    ctx->pc = 0x1edbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8148)));
    // 0x1edbbc: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1edbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1edbc0:
    // 0x1edbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDBC8u;
    // 0x1edbc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1edbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1edbcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1edbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1edbd0: 0xc07b70e  jal         func_1EDC38
    ctx->pc = 0x1EDBD0u;
    SET_GPR_U32(ctx, 31, 0x1EDBD8u);
    ctx->pc = 0x1EDC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC38u, 0x1EDBD0u, 0x1EDBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDBD8u;
label_1edbd8:
    // 0x1edbd8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EDBD8u;
    {
        const bool branch_taken_0x1edbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBD8u;
        // 0x1edbdc: 0x3c0501c0  lui         $a1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbd8) {
            ctx->pc = 0x1EDC00u;
            goto label_1edc00;
        }
    }
    ctx->pc = 0x1EDBE0u;
label_1edbe0:
    // 0x1edbe0: 0x0  nop
    ctx->pc = 0x1edbe0u;
    // NOP
    // 0x1edbe4: 0x0  nop
    ctx->pc = 0x1edbe4u;
    // NOP
    // 0x1edbe8: 0x0  nop
    ctx->pc = 0x1edbe8u;
    // NOP
    // 0x1edbec: 0x0  nop
    ctx->pc = 0x1edbecu;
    // NOP
    // 0x1edbf0: 0x0  nop
    ctx->pc = 0x1edbf0u;
    // NOP
    // 0x1edbf4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EDBF4u;
    {
        const bool branch_taken_0x1edbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edbf4) {
            ctx->pc = 0x1EDBE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1edbe0;
        }
    }
    ctx->pc = 0x1EDBFCu;
    // 0x1edbfc: 0x0  nop
    ctx->pc = 0x1edbfcu;
    // NOP
label_1edc00:
    // 0x1edc00: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1edc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1edc04: 0xc076168  jal         func_1D85A0
    ctx->pc = 0x1EDC04u;
    SET_GPR_U32(ctx, 31, 0x1EDC0Cu);
    ctx->pc = 0x1EDC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC04u;
    // 0x1edc08: 0x24a54f60  addiu       $a1, $a1, 0x4F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D85A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D85A0u, 0x1EDC04u, 0x1EDC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC0Cu;
label_1edc0c:
    // 0x1edc0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EDC0Cu;
    {
        const bool branch_taken_0x1edc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC0Cu;
        // 0x1edc10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc0c) {
            ctx->pc = 0x1EDC28u;
            goto label_1edc28;
        }
    }
    ctx->pc = 0x1EDC14u;
    // 0x1edc14: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1edc14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1edc18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1edc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc1c: 0x34a50d01  ori         $a1, $a1, 0xD01
    ctx->pc = 0x1edc1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3329);
    // 0x1edc20: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EDC20u;
    ctx->pc = 0x1EDC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC20u;
    // 0x1edc24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1EDC28u;
label_1edc28:
    // 0x1edc28: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1edc28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1edc2c: 0xac601770  sw          $zero, 0x1770($v1)
    ctx->pc = 0x1edc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6000), GPR_U32(ctx, 0));
    // 0x1edc30: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC30u;
        // 0x1edc34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDC38u;
}
