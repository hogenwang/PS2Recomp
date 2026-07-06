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

// Function: sub_00115C50
// Address: 0x115c50 - 0x115d80
void sub_00115C50_0x115c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115C50_0x115c50");
#endif

    switch (ctx->pc) {
        case 0x115c64u: goto label_115c64;
        case 0x115c74u: goto label_115c74;
        case 0x115c9cu: goto label_115c9c;
        case 0x115cd0u: goto label_115cd0;
        case 0x115d08u: goto label_115d08;
        case 0x115d18u: goto label_115d18;
        case 0x115d5cu: goto label_115d5c;
        default: break;
    }

    ctx->pc = 0x115c50u;

    // 0x115c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115c54: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x115c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x115c58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x115c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x115c5c: 0xc04557a  jal         func_1155E8
    ctx->pc = 0x115C5Cu;
    SET_GPR_U32(ctx, 31, 0x115C64u);
    ctx->pc = 0x115C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115C5Cu;
    // 0x115c60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1155E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155E8u, 0x115C5Cu, 0x115C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C64u;
label_115c64:
    // 0x115c64: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x115C64u;
    {
        const bool branch_taken_0x115c64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x115C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C64u;
        // 0x115c68: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c64) {
            ctx->pc = 0x115CE0u;
            goto label_115ce0;
        }
    }
    ctx->pc = 0x115C6Cu;
    // 0x115c6c: 0xc0455ba  jal         func_1156E8
    ctx->pc = 0x115C6Cu;
    SET_GPR_U32(ctx, 31, 0x115C74u);
    ctx->pc = 0x1156E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1156E8u, 0x115C6Cu, 0x115C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C74u;
label_115c74:
    // 0x115c74: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x115C74u;
    {
        const bool branch_taken_0x115c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115c74) {
            ctx->pc = 0x115C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115C74u;
            // 0x115c78: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115C88u;
            goto label_115c88;
        }
    }
    ctx->pc = 0x115C7Cu;
    // 0x115c7c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x115c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x115c80: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x115C80u;
    {
        const bool branch_taken_0x115c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C80u;
        // 0x115c84: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c80) {
            ctx->pc = 0x115CE0u;
            goto label_115ce0;
        }
    }
    ctx->pc = 0x115C88u;
label_115c88:
    // 0x115c88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x115c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c8c: 0x24509c48  addiu       $s0, $v0, -0x63B8
    ctx->pc = 0x115c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941768));
    // 0x115c90: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x115c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x115c94: 0xc04a966  jal         func_12A598
    ctx->pc = 0x115C94u;
    SET_GPR_U32(ctx, 31, 0x115C9Cu);
    ctx->pc = 0x115C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115C94u;
    // 0x115c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x115C94u, 0x115C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C9Cu;
label_115c9c:
    // 0x115c9c: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x115c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x115ca0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x115ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x115ca4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x115ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ca8: 0xa0600103  sb          $zero, 0x103($v1)
    ctx->pc = 0x115ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x115cac: 0x24849e40  addiu       $a0, $a0, -0x61C0
    ctx->pc = 0x115cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942272));
    // 0x115cb0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x115cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x115cb4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115cb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115cbc: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x115cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x115cc0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x115cc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115cc4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x115cc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115cc8: 0xc04434c  jal         func_110D30
    ctx->pc = 0x115CC8u;
    SET_GPR_U32(ctx, 31, 0x115CD0u);
    ctx->pc = 0x115CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115CC8u;
    // 0x115ccc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x115CC8u, 0x115CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115CD0u;
label_115cd0:
    // 0x115cd0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115CD0u;
    {
        const bool branch_taken_0x115cd0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x115cd0) {
            ctx->pc = 0x115CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115CD0u;
            // 0x115cd4: 0x8e02fff8  lw          $v0, -0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115CE0u;
            goto label_115ce0;
        }
    }
    ctx->pc = 0x115CD8u;
    // 0x115cd8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x115cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x115cdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x115cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_115ce0:
    // 0x115ce0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x115ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115ce4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x115ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x115CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CE8u;
        // 0x115cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115CF0u;
    // 0x115cf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x115cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x115cf4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x115cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x115cf8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x115cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x115cfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x115cfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d00: 0xc04557a  jal         func_1155E8
    ctx->pc = 0x115D00u;
    SET_GPR_U32(ctx, 31, 0x115D08u);
    ctx->pc = 0x115D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115D00u;
    // 0x115d04: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1155E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155E8u, 0x115D00u, 0x115D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D08u;
label_115d08:
    // 0x115d08: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x115D08u;
    {
        const bool branch_taken_0x115d08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x115D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D08u;
        // 0x115d0c: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d08) {
            ctx->pc = 0x115D6Cu;
            goto label_115d6c;
        }
    }
    ctx->pc = 0x115D10u;
    // 0x115d10: 0xc0455ba  jal         func_1156E8
    ctx->pc = 0x115D10u;
    SET_GPR_U32(ctx, 31, 0x115D18u);
    ctx->pc = 0x1156E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1156E8u, 0x115D10u, 0x115D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D18u;
label_115d18:
    // 0x115d18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115D18u;
    {
        const bool branch_taken_0x115d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D18u;
        // 0x115d1c: 0x3c100041  lui         $s0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d18) {
            ctx->pc = 0x115D2Cu;
            goto label_115d2c;
        }
    }
    ctx->pc = 0x115D20u;
    // 0x115d20: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x115d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x115d24: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x115D24u;
    {
        const bool branch_taken_0x115d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D24u;
        // 0x115d28: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d24) {
            ctx->pc = 0x115D6Cu;
            goto label_115d6c;
        }
    }
    ctx->pc = 0x115D2Cu;
label_115d2c:
    // 0x115d2c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x115d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x115d30: 0x26079c40  addiu       $a3, $s0, -0x63C0
    ctx->pc = 0x115d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941760));
    // 0x115d34: 0xae119c40  sw          $s1, -0x63C0($s0)
    ctx->pc = 0x115d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941760), GPR_U32(ctx, 17));
    // 0x115d38: 0x24849e40  addiu       $a0, $a0, -0x61C0
    ctx->pc = 0x115d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942272));
    // 0x115d3c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115d40: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x115d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x115d44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d48: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x115d48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115d4c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x115d4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d50: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x115d50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115d54: 0xc04434c  jal         func_110D30
    ctx->pc = 0x115D54u;
    SET_GPR_U32(ctx, 31, 0x115D5Cu);
    ctx->pc = 0x115D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115D54u;
    // 0x115d58: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x115D54u, 0x115D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D5Cu;
label_115d5c:
    // 0x115d5c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115D5Cu;
    {
        const bool branch_taken_0x115d5c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x115d5c) {
            ctx->pc = 0x115D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115D5Cu;
            // 0x115d60: 0x8e029c40  lw          $v0, -0x63C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115D6Cu;
            goto label_115d6c;
        }
    }
    ctx->pc = 0x115D64u;
    // 0x115d64: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x115d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x115d68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x115d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_115d6c:
    // 0x115d6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x115d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115d70: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x115d70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115d74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x115d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115d78: 0x3e00008  jr          $ra
    ctx->pc = 0x115D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D78u;
        // 0x115d7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115D80u;
}
