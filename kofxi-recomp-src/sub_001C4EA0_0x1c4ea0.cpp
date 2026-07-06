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

// Function: sub_001C4EA0
// Address: 0x1c4ea0 - 0x1c4fd0
void sub_001C4EA0_0x1c4ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4EA0_0x1c4ea0");
#endif

    switch (ctx->pc) {
        case 0x1c4f60u: goto label_1c4f60;
        case 0x1c4f70u: goto label_1c4f70;
        case 0x1c4f80u: goto label_1c4f80;
        case 0x1c4f90u: goto label_1c4f90;
        case 0x1c4fa0u: goto label_1c4fa0;
        case 0x1c4fb0u: goto label_1c4fb0;
        default: break;
    }

    ctx->pc = 0x1c4ea0u;

label_1c4ea0:
    // 0x1c4ea0: 0x9c820008  lwu         $v0, 0x8($a0)
    ctx->pc = 0x1c4ea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c4ea4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c4ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c4ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EA8u;
        // 0x1c4eac: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4EB0u;
    // 0x1c4eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4eb4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c4eb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4ebc: 0x10800040  beqz        $a0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1C4EBCu;
    {
        const bool branch_taken_0x1c4ebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EBCu;
        // 0x1c4ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ebc) {
            ctx->pc = 0x1C4FC0u;
            goto label_1c4fc0;
        }
    }
    ctx->pc = 0x1C4EC4u;
    // 0x1c4ec4: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x1c4ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x1c4ec8: 0x10a2002b  beq         $a1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C4EC8u;
    {
        const bool branch_taken_0x1c4ec8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EC8u;
        // 0x1c4ecc: 0x28a200cd  slti        $v0, $a1, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)205) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ec8) {
            ctx->pc = 0x1C4F78u;
            goto label_1c4f78;
        }
    }
    ctx->pc = 0x1C4ED0u;
    // 0x1c4ed0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C4ED0u;
    {
        const bool branch_taken_0x1c4ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4ED0u;
        // 0x1c4ed4: 0x2402012b  addiu       $v0, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ed0) {
            ctx->pc = 0x1C4F18u;
            goto label_1c4f18;
        }
    }
    ctx->pc = 0x1C4ED8u;
    // 0x1c4ed8: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x1c4ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x1c4edc: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C4EDCu;
    {
        const bool branch_taken_0x1c4edc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EDCu;
        // 0x1c4ee0: 0x28a200ca  slti        $v0, $a1, 0xCA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)202) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4edc) {
            ctx->pc = 0x1C4F68u;
            goto label_1c4f68;
        }
    }
    ctx->pc = 0x1C4EE4u;
    // 0x1c4ee4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4EE4u;
    {
        const bool branch_taken_0x1c4ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EE4u;
        // 0x1c4ee8: 0x240200ca  addiu       $v0, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ee4) {
            ctx->pc = 0x1C4F00u;
            goto label_1c4f00;
        }
    }
    ctx->pc = 0x1C4EECu;
    // 0x1c4eec: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1c4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1c4ef0: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C4EF0u;
    {
        const bool branch_taken_0x1c4ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EF0u;
        // 0x1c4ef4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ef0) {
            ctx->pc = 0x1C4F58u;
            goto label_1c4f58;
        }
    }
    ctx->pc = 0x1C4EF8u;
    // 0x1c4ef8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1C4EF8u;
    {
        const bool branch_taken_0x1c4ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EF8u;
        // 0x1c4efc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ef8) {
            ctx->pc = 0x1C4FC4u;
            goto label_1c4fc4;
        }
    }
    ctx->pc = 0x1C4F00u;
label_1c4f00:
    // 0x1c4f00: 0x10a2001d  beq         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C4F00u;
    {
        const bool branch_taken_0x1c4f00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F00u;
        // 0x1c4f04: 0x240200cb  addiu       $v0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f00) {
            ctx->pc = 0x1C4F78u;
            goto label_1c4f78;
        }
    }
    ctx->pc = 0x1C4F08u;
    // 0x1c4f08: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C4F08u;
    {
        const bool branch_taken_0x1c4f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F08u;
        // 0x1c4f0c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f08) {
            ctx->pc = 0x1C4F88u;
            goto label_1c4f88;
        }
    }
    ctx->pc = 0x1C4F10u;
    // 0x1c4f10: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1C4F10u;
    {
        const bool branch_taken_0x1c4f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F10u;
        // 0x1c4f14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f10) {
            ctx->pc = 0x1C4FC4u;
            goto label_1c4fc4;
        }
    }
    ctx->pc = 0x1C4F18u;
label_1c4f18:
    // 0x1c4f18: 0x10a20027  beq         $a1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C4F18u;
    {
        const bool branch_taken_0x1c4f18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F18u;
        // 0x1c4f1c: 0x28a2012c  slti        $v0, $a1, 0x12C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)300) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f18) {
            ctx->pc = 0x1C4FB8u;
            goto label_1c4fb8;
        }
    }
    ctx->pc = 0x1C4F20u;
    // 0x1c4f20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4F20u;
    {
        const bool branch_taken_0x1c4f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F20u;
        // 0x1c4f24: 0x2402012d  addiu       $v0, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f20) {
            ctx->pc = 0x1C4F40u;
            goto label_1c4f40;
        }
    }
    ctx->pc = 0x1C4F28u;
    // 0x1c4f28: 0x240200cd  addiu       $v0, $zero, 0xCD
    ctx->pc = 0x1c4f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x1c4f2c: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C4F2Cu;
    {
        const bool branch_taken_0x1c4f2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F2Cu;
        // 0x1c4f30: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f2c) {
            ctx->pc = 0x1C4F88u;
            goto label_1c4f88;
        }
    }
    ctx->pc = 0x1C4F34u;
    // 0x1c4f34: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1C4F34u;
    {
        const bool branch_taken_0x1c4f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F34u;
        // 0x1c4f38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f34) {
            ctx->pc = 0x1C4FC4u;
            goto label_1c4fc4;
        }
    }
    ctx->pc = 0x1C4F3Cu;
    // 0x1c4f3c: 0x0  nop
    ctx->pc = 0x1c4f3cu;
    // NOP
label_1c4f40:
    // 0x1c4f40: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C4F40u;
    {
        const bool branch_taken_0x1c4f40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F40u;
        // 0x1c4f44: 0x2402012e  addiu       $v0, $zero, 0x12E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f40) {
            ctx->pc = 0x1C4F98u;
            goto label_1c4f98;
        }
    }
    ctx->pc = 0x1C4F48u;
    // 0x1c4f48: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C4F48u;
    {
        const bool branch_taken_0x1c4f48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F48u;
        // 0x1c4f4c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f48) {
            ctx->pc = 0x1C4FA8u;
            goto label_1c4fa8;
        }
    }
    ctx->pc = 0x1C4F50u;
    // 0x1c4f50: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C4F50u;
    {
        const bool branch_taken_0x1c4f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F50u;
        // 0x1c4f54: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f50) {
            ctx->pc = 0x1C4FC4u;
            goto label_1c4fc4;
        }
    }
    ctx->pc = 0x1C4F58u;
label_1c4f58:
    // 0x1c4f58: 0xc07137c  jal         func_1C4DF0
    ctx->pc = 0x1C4F58u;
    SET_GPR_U32(ctx, 31, 0x1C4F60u);
    ctx->pc = 0x1C4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4DF0u, 0x1C4F58u, 0x1C4F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F60u;
label_1c4f60:
    // 0x1c4f60: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C4F60u;
    {
        const bool branch_taken_0x1c4f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F60u;
        // 0x1c4f64: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f60) {
            ctx->pc = 0x1C4FBCu;
            goto label_1c4fbc;
        }
    }
    ctx->pc = 0x1C4F68u;
label_1c4f68:
    // 0x1c4f68: 0xc071384  jal         func_1C4E10
    ctx->pc = 0x1C4F68u;
    SET_GPR_U32(ctx, 31, 0x1C4F70u);
    ctx->pc = 0x1C4E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E10u, 0x1C4F68u, 0x1C4F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F70u;
label_1c4f70:
    // 0x1c4f70: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C4F70u;
    {
        const bool branch_taken_0x1c4f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F70u;
        // 0x1c4f74: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f70) {
            ctx->pc = 0x1C4FBCu;
            goto label_1c4fbc;
        }
    }
    ctx->pc = 0x1C4F78u;
label_1c4f78:
    // 0x1c4f78: 0xc071390  jal         func_1C4E40
    ctx->pc = 0x1C4F78u;
    SET_GPR_U32(ctx, 31, 0x1C4F80u);
    ctx->pc = 0x1C4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E40u, 0x1C4F78u, 0x1C4F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F80u;
label_1c4f80:
    // 0x1c4f80: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C4F80u;
    {
        const bool branch_taken_0x1c4f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F80u;
        // 0x1c4f84: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f80) {
            ctx->pc = 0x1C4FBCu;
            goto label_1c4fbc;
        }
    }
    ctx->pc = 0x1C4F88u;
label_1c4f88:
    // 0x1c4f88: 0xc071398  jal         func_1C4E60
    ctx->pc = 0x1C4F88u;
    SET_GPR_U32(ctx, 31, 0x1C4F90u);
    ctx->pc = 0x1C4E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E60u, 0x1C4F88u, 0x1C4F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F90u;
label_1c4f90:
    // 0x1c4f90: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C4F90u;
    {
        const bool branch_taken_0x1c4f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F90u;
        // 0x1c4f94: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f90) {
            ctx->pc = 0x1C4FBCu;
            goto label_1c4fbc;
        }
    }
    ctx->pc = 0x1C4F98u;
label_1c4f98:
    // 0x1c4f98: 0xc0713a4  jal         func_1C4E90
    ctx->pc = 0x1C4F98u;
    SET_GPR_U32(ctx, 31, 0x1C4FA0u);
    ctx->pc = 0x1C4E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E90u, 0x1C4F98u, 0x1C4FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FA0u;
label_1c4fa0:
    // 0x1c4fa0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4FA0u;
    {
        const bool branch_taken_0x1c4fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FA0u;
        // 0x1c4fa4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4fa0) {
            ctx->pc = 0x1C4FBCu;
            goto label_1c4fbc;
        }
    }
    ctx->pc = 0x1C4FA8u;
label_1c4fa8:
    // 0x1c4fa8: 0xc0713a8  jal         func_1C4EA0
    ctx->pc = 0x1C4FA8u;
    SET_GPR_U32(ctx, 31, 0x1C4FB0u);
    ctx->pc = 0x1C4EA0u;
    goto label_1c4ea0;
    ctx->pc = 0x1C4FB0u;
label_1c4fb0:
    // 0x1c4fb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4FB0u;
    {
        const bool branch_taken_0x1c4fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FB0u;
        // 0x1c4fb4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4fb0) {
            ctx->pc = 0x1C4FBCu;
            goto label_1c4fbc;
        }
    }
    ctx->pc = 0x1C4FB8u;
label_1c4fb8:
    // 0x1c4fb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4fbc:
    // 0x1c4fbc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c4fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c4fc0:
    // 0x1c4fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4fc4:
    // 0x1c4fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FC4u;
        // 0x1c4fc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4FCCu;
    // 0x1c4fcc: 0x0  nop
    ctx->pc = 0x1c4fccu;
    // NOP
}
