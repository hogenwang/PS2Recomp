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

// Function: sub_002F5CE8
// Address: 0x2f5ce8 - 0x2f6188
void sub_002F5CE8_0x2f5ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5CE8_0x2f5ce8");
#endif

    switch (ctx->pc) {
        case 0x2f5d50u: goto label_2f5d50;
        case 0x2f5d78u: goto label_2f5d78;
        case 0x2f5d7cu: goto label_2f5d7c;
        case 0x2f5dccu: goto label_2f5dcc;
        case 0x2f5decu: goto label_2f5dec;
        case 0x2f5e0cu: goto label_2f5e0c;
        case 0x2f5e2cu: goto label_2f5e2c;
        case 0x2f5e4cu: goto label_2f5e4c;
        case 0x2f5e78u: goto label_2f5e78;
        case 0x2f5e80u: goto label_2f5e80;
        case 0x2f5ea8u: goto label_2f5ea8;
        case 0x2f5ebcu: goto label_2f5ebc;
        case 0x2f5f0cu: goto label_2f5f0c;
        case 0x2f5f30u: goto label_2f5f30;
        case 0x2f5f48u: goto label_2f5f48;
        case 0x2f5f58u: goto label_2f5f58;
        case 0x2f5f7cu: goto label_2f5f7c;
        case 0x2f607cu: goto label_2f607c;
        case 0x2f6130u: goto label_2f6130;
        default: break;
    }

    ctx->pc = 0x2f5ce8u;

    // 0x2f5ce8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f5ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f5cec: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2f5cecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5cf0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f5cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f5cf4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2f5cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f5cf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f5cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f5cfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f5cfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d00: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f5d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f5d04: 0x2c62001a  sltiu       $v0, $v1, 0x1A
    ctx->pc = 0x2f5d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2f5d08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f5d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f5d0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f5d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f5d10: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x2f5d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x2f5d14: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x2f5d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x2f5d18: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x2f5d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x2f5d1c: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x2f5d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x2f5d20: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x2f5d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x2f5d24: 0x1040010c  beqz        $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x2F5D24u;
    {
        const bool branch_taken_0x2f5d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D24u;
        // 0x2f5d28: 0xffab00b8  sd          $t3, 0xB8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d24) {
            ctx->pc = 0x2F6158u;
            goto label_2f6158;
        }
    }
    ctx->pc = 0x2F5D2Cu;
    // 0x2f5d2c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f5d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f5d30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f5d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5d34: 0x244222c0  addiu       $v0, $v0, 0x22C0
    ctx->pc = 0x2f5d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8896));
    // 0x2f5d38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f5d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f5d3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f5d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f5d40: 0x800008  jr          $a0
    ctx->pc = 0x2F5D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F5D48u: goto label_2f5d48;
            case 0x2F5D84u: goto label_2f5d84;
            case 0x2F5DA0u: goto label_2f5da0;
            case 0x2F5DB8u: goto label_2f5db8;
            case 0x2F5DF8u: goto label_2f5df8;
            case 0x2F5E38u: goto label_2f5e38;
            case 0x2F5EC4u: goto label_2f5ec4;
            case 0x2F5F88u: goto label_2f5f88;
            case 0x2F5F98u: goto label_2f5f98;
            case 0x2F5FA8u: goto label_2f5fa8;
            case 0x2F5FB8u: goto label_2f5fb8;
            case 0x2F5FCCu: goto label_2f5fcc;
            case 0x2F5FE0u: goto label_2f5fe0;
            case 0x2F6000u: goto label_2f6000;
            case 0x2F6020u: goto label_2f6020;
            case 0x2F6040u: goto label_2f6040;
            case 0x2F6090u: goto label_2f6090;
            case 0x2F60A0u: goto label_2f60a0;
            case 0x2F60C0u: goto label_2f60c0;
            case 0x2F60D8u: goto label_2f60d8;
            case 0x2F60E8u: goto label_2f60e8;
            case 0x2F6100u: goto label_2f6100;
            case 0x2F6124u: goto label_2f6124;
            case 0x2F6138u: goto label_2f6138;
            case 0x2F6148u: goto label_2f6148;
            case 0x2F6158u: goto label_2f6158;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5D40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F5D48u;
label_2f5d48:
    // 0x2f5d48: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F5D48u;
    SET_GPR_U32(ctx, 31, 0x2F5D50u);
    ctx->pc = 0x2F5D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5D48u;
    // 0x2f5d4c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6510u, 0x2F5D48u, 0x2F5D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D50u;
label_2f5d50:
    // 0x2f5d50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f5d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d54: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5D54u;
    {
        const bool branch_taken_0x2f5d54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5d54) {
            ctx->pc = 0x2F5D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5D54u;
            // 0x2f5d58: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5D68u;
            goto label_2f5d68;
        }
    }
    ctx->pc = 0x2F5D5Cu;
    // 0x2f5d5c: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x2F5D5Cu;
    {
        const bool branch_taken_0x2f5d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D5Cu;
        // 0x2f5d60: 0x2402fc16  addiu       $v0, $zero, -0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d5c) {
            ctx->pc = 0x2F6160u;
            goto label_2f6160;
        }
    }
    ctx->pc = 0x2F5D64u;
    // 0x2f5d64: 0x0  nop
    ctx->pc = 0x2f5d64u;
    // NOP
label_2f5d68:
    // 0x2f5d68: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5D68u;
    {
        const bool branch_taken_0x2f5d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5d68) {
            ctx->pc = 0x2F5D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5D68u;
            // 0x2f5d6c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5D7Cu;
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F5D70u;
    // 0x2f5d70: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F5D70u;
    SET_GPR_U32(ctx, 31, 0x2F5D78u);
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F5D70u, 0x2F5D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D78u;
label_2f5d78:
    // 0x2f5d78: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2f5d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2f5d7c:
    // 0x2f5d7c: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x2F5D7Cu;
    {
        const bool branch_taken_0x2f5d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D7Cu;
        // 0x2f5d80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d7c) {
            ctx->pc = 0x2F6168u;
            goto label_2f6168;
        }
    }
    ctx->pc = 0x2F5D84u;
label_2f5d84:
    // 0x2f5d84: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f5d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f5d88: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x2f5d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f5d8c: 0x104000f4  beqz        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x2F5D8Cu;
    {
        const bool branch_taken_0x2f5d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D8Cu;
        // 0x2f5d90: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d8c) {
            ctx->pc = 0x2F6160u;
            goto label_2f6160;
        }
    }
    ctx->pc = 0x2F5D94u;
    // 0x2f5d94: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F5D94u;
    {
        const bool branch_taken_0x2f5d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D94u;
        // 0x2f5d98: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d94) {
            ctx->pc = 0x2F5D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F5D9Cu;
    // 0x2f5d9c: 0x0  nop
    ctx->pc = 0x2f5d9cu;
    // NOP
label_2f5da0:
    // 0x2f5da0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f5da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f5da4: 0x2c82000f  sltiu       $v0, $a0, 0xF
    ctx->pc = 0x2f5da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x2f5da8: 0x104000ed  beqz        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x2F5DA8u;
    {
        const bool branch_taken_0x2f5da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DA8u;
        // 0x2f5dac: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5da8) {
            ctx->pc = 0x2F6160u;
            goto label_2f6160;
        }
    }
    ctx->pc = 0x2F5DB0u;
    // 0x2f5db0: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x2F5DB0u;
    {
        const bool branch_taken_0x2f5db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DB0u;
        // 0x2f5db4: 0xae2400b4  sw          $a0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5db0) {
            ctx->pc = 0x2F5D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F5DB8u;
label_2f5db8:
    // 0x2f5db8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f5db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f5dbc: 0x108000e8  beqz        $a0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2F5DBCu;
    {
        const bool branch_taken_0x2f5dbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DBCu;
        // 0x2f5dc0: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5dbc) {
            ctx->pc = 0x2F6160u;
            goto label_2f6160;
        }
    }
    ctx->pc = 0x2F5DC4u;
    // 0x2f5dc4: 0xc0bd40a  jal         func_2F5028
    ctx->pc = 0x2F5DC4u;
    SET_GPR_U32(ctx, 31, 0x2F5DCCu);
    ctx->pc = 0x2F5028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5028u, 0x2F5DC4u, 0x2F5DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DCCu;
label_2f5dcc:
    // 0x2f5dcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f5dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5dd0: 0x120000e5  beqz        $s0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x2F5DD0u;
    {
        const bool branch_taken_0x2f5dd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DD0u;
        // 0x2f5dd4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5dd0) {
            ctx->pc = 0x2F6168u;
            goto label_2f6168;
        }
    }
    ctx->pc = 0x2F5DD8u;
    // 0x2f5dd8: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x2f5dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2f5ddc: 0x5080ffe7  beql        $a0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2F5DDCu;
    {
        const bool branch_taken_0x2f5ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5ddc) {
            ctx->pc = 0x2F5DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5DDCu;
            // 0x2f5de0: 0xae3000b8  sw          $s0, 0xB8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F5DE4u;
    // 0x2f5de4: 0xc0bd44c  jal         func_2F5130
    ctx->pc = 0x2F5DE4u;
    SET_GPR_U32(ctx, 31, 0x2F5DECu);
    ctx->pc = 0x2F5130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5130u, 0x2F5DE4u, 0x2F5DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DECu;
label_2f5dec:
    // 0x2f5dec: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x2F5DECu;
    {
        const bool branch_taken_0x2f5dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DECu;
        // 0x2f5df0: 0xae3000b8  sw          $s0, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5dec) {
            ctx->pc = 0x2F5D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F5DF4u;
    // 0x2f5df4: 0x0  nop
    ctx->pc = 0x2f5df4u;
    // NOP
label_2f5df8:
    // 0x2f5df8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f5df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f5dfc: 0x108000d8  beqz        $a0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x2F5DFCu;
    {
        const bool branch_taken_0x2f5dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DFCu;
        // 0x2f5e00: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5dfc) {
            ctx->pc = 0x2F6160u;
            goto label_2f6160;
        }
    }
    ctx->pc = 0x2F5E04u;
    // 0x2f5e04: 0xc0bd40a  jal         func_2F5028
    ctx->pc = 0x2F5E04u;
    SET_GPR_U32(ctx, 31, 0x2F5E0Cu);
    ctx->pc = 0x2F5028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5028u, 0x2F5E04u, 0x2F5E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E0Cu;
label_2f5e0c:
    // 0x2f5e0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f5e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5e10: 0x120000d5  beqz        $s0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x2F5E10u;
    {
        const bool branch_taken_0x2f5e10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E10u;
        // 0x2f5e14: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e10) {
            ctx->pc = 0x2F6168u;
            goto label_2f6168;
        }
    }
    ctx->pc = 0x2F5E18u;
    // 0x2f5e18: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x2f5e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x2f5e1c: 0x5080ffd7  beql        $a0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2F5E1Cu;
    {
        const bool branch_taken_0x2f5e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e1c) {
            ctx->pc = 0x2F5E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5E1Cu;
            // 0x2f5e20: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F5E24u;
    // 0x2f5e24: 0xc0bd44c  jal         func_2F5130
    ctx->pc = 0x2F5E24u;
    SET_GPR_U32(ctx, 31, 0x2F5E2Cu);
    ctx->pc = 0x2F5130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5130u, 0x2F5E24u, 0x2F5E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E2Cu;
label_2f5e2c:
    // 0x2f5e2c: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x2F5E2Cu;
    {
        const bool branch_taken_0x2f5e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E2Cu;
        // 0x2f5e30: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e2c) {
            ctx->pc = 0x2F5D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F5E34u;
    // 0x2f5e34: 0x0  nop
    ctx->pc = 0x2f5e34u;
    // NOP
label_2f5e38:
    // 0x2f5e38: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2f5e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f5e3c: 0x8cb0fff8  lw          $s0, -0x8($a1)
    ctx->pc = 0x2f5e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x2f5e40: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x2f5e40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f5e44: 0xc0bd5b0  jal         func_2F56C0
    ctx->pc = 0x2F5E44u;
    SET_GPR_U32(ctx, 31, 0x2F5E4Cu);
    ctx->pc = 0x2F5E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E44u;
    // 0x2f5e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F56C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F56C0u, 0x2F5E44u, 0x2F5E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E4Cu;
label_2f5e4c:
    // 0x2f5e4c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5E4Cu;
    {
        const bool branch_taken_0x2f5e4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E4Cu;
        // 0x2f5e50: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e4c) {
            ctx->pc = 0x2F5E5Cu;
            goto label_2f5e5c;
        }
    }
    ctx->pc = 0x2F5E54u;
    // 0x2f5e54: 0x124000c4  beqz        $s2, . + 4 + (0xC4 << 2)
    ctx->pc = 0x2F5E54u;
    {
        const bool branch_taken_0x2f5e54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E54u;
        // 0x2f5e58: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e54) {
            ctx->pc = 0x2F6168u;
            goto label_2f6168;
        }
    }
    ctx->pc = 0x2F5E5Cu;
label_2f5e5c:
    // 0x2f5e5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f5e60: 0x1662000d  bne         $s3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F5E60u;
    {
        const bool branch_taken_0x2f5e60 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E60u;
        // 0x2f5e64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e60) {
            ctx->pc = 0x2F5E98u;
            goto label_2f5e98;
        }
    }
    ctx->pc = 0x2F5E68u;
    // 0x2f5e68: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F5E68u;
    {
        const bool branch_taken_0x2f5e68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E68u;
        // 0x2f5e6c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e68) {
            ctx->pc = 0x2F5EB0u;
            goto label_2f5eb0;
        }
    }
    ctx->pc = 0x2F5E70u;
    // 0x2f5e70: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2f5e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f5e74: 0x0  nop
    ctx->pc = 0x2f5e74u;
    // NOP
label_2f5e78:
    // 0x2f5e78: 0xc0bd5e0  jal         func_2F5780
    ctx->pc = 0x2F5E78u;
    SET_GPR_U32(ctx, 31, 0x2F5E80u);
    ctx->pc = 0x2F5E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E78u;
    // 0x2f5e7c: 0x8e2400bc  lw          $a0, 0xBC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5780u, 0x2F5E78u, 0x2F5E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E80u;
label_2f5e80:
    // 0x2f5e80: 0xae2200bc  sw          $v0, 0xBC($s1)
    ctx->pc = 0x2f5e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
    // 0x2f5e84: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2f5e84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f5e88: 0x5600fffb  bnel        $s0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F5E88u;
    {
        const bool branch_taken_0x2f5e88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e88) {
            ctx->pc = 0x2F5E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5E88u;
            // 0x2f5e8c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5E78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5e78;
        }
    }
    ctx->pc = 0x2F5E90u;
    // 0x2f5e90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5E90u;
    {
        const bool branch_taken_0x2f5e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E90u;
        // 0x2f5e94: 0x8e2400bc  lw          $a0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e90) {
            ctx->pc = 0x2F5EB4u;
            goto label_2f5eb4;
        }
    }
    ctx->pc = 0x2F5E98u;
label_2f5e98:
    // 0x2f5e98: 0x56620006  bnel        $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5E98u;
    {
        const bool branch_taken_0x2f5e98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f5e98) {
            ctx->pc = 0x2F5E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5E98u;
            // 0x2f5e9c: 0x8e2400bc  lw          $a0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5EB4u;
            goto label_2f5eb4;
        }
    }
    ctx->pc = 0x2F5EA0u;
    // 0x2f5ea0: 0xc0bd594  jal         func_2F5650
    ctx->pc = 0x2F5EA0u;
    SET_GPR_U32(ctx, 31, 0x2F5EA8u);
    ctx->pc = 0x2F5EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5EA0u;
    // 0x2f5ea4: 0x8e2400bc  lw          $a0, 0xBC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5650u, 0x2F5EA0u, 0x2F5EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5EA8u;
label_2f5ea8:
    // 0x2f5ea8: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
    ctx->pc = 0x2F5EA8u;
    {
        const bool branch_taken_0x2f5ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EA8u;
        // 0x2f5eac: 0xae3200bc  sw          $s2, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ea8) {
            ctx->pc = 0x2F5D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F5EB0u;
label_2f5eb0:
    // 0x2f5eb0: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x2f5eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_2f5eb4:
    // 0x2f5eb4: 0xc0bd5ca  jal         func_2F5728
    ctx->pc = 0x2F5EB4u;
    SET_GPR_U32(ctx, 31, 0x2F5EBCu);
    ctx->pc = 0x2F5EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5EB4u;
    // 0x2f5eb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5728u, 0x2F5EB4u, 0x2F5EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5EBCu;
label_2f5ebc:
    // 0x2f5ebc: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
    ctx->pc = 0x2F5EBCu;
    {
        const bool branch_taken_0x2f5ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EBCu;
        // 0x2f5ec0: 0xae2200bc  sw          $v0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ebc) {
            ctx->pc = 0x2F5D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F5EC4u;
label_2f5ec4:
    // 0x2f5ec4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2f5ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f5ec8: 0x8cb2fff8  lw          $s2, -0x8($a1)
    ctx->pc = 0x2f5ec8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x2f5ecc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2f5eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f5ed0: 0x8cb0fff8  lw          $s0, -0x8($a1)
    ctx->pc = 0x2f5ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x2f5ed4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5ED4u;
    {
        const bool branch_taken_0x2f5ed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5ED4u;
        // 0x2f5ed8: 0x8cb30000  lw          $s3, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ed4) {
            ctx->pc = 0x2F5EE8u;
            goto label_2f5ee8;
        }
    }
    ctx->pc = 0x2F5EDCu;
    // 0x2f5edc: 0x124000a0  beqz        $s2, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2F5EDCu;
    {
        const bool branch_taken_0x2f5edc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EDCu;
        // 0x2f5ee0: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5edc) {
            ctx->pc = 0x2F6160u;
            goto label_2f6160;
        }
    }
    ctx->pc = 0x2F5EE4u;
    // 0x2f5ee4: 0x0  nop
    ctx->pc = 0x2f5ee4u;
    // NOP
label_2f5ee8:
    // 0x2f5ee8: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x2f5ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x2f5eec: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5EECu;
    {
        const bool branch_taken_0x2f5eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EECu;
        // 0x2f5ef0: 0x32620002  andi        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5eec) {
            ctx->pc = 0x2F5F10u;
            goto label_2f5f10;
        }
    }
    ctx->pc = 0x2F5EF4u;
    // 0x2f5ef4: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x2f5ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x2f5ef8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2f5ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2f5efc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5EFCu;
    {
        const bool branch_taken_0x2f5efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EFCu;
        // 0x2f5f00: 0x32620002  andi        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5efc) {
            ctx->pc = 0x2F5F10u;
            goto label_2f5f10;
        }
    }
    ctx->pc = 0x2F5F04u;
    // 0x2f5f04: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F5F04u;
    SET_GPR_U32(ctx, 31, 0x2F5F0Cu);
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F5F04u, 0x2F5F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F0Cu;
label_2f5f0c:
    // 0x2f5f0c: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x2f5f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_2f5f10:
    // 0x2f5f10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5F10u;
    {
        const bool branch_taken_0x2f5f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F10u;
        // 0x2f5f14: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f10) {
            ctx->pc = 0x2F5F20u;
            goto label_2f5f20;
        }
    }
    ctx->pc = 0x2F5F18u;
    // 0x2f5f18: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2F5F18u;
    {
        const bool branch_taken_0x2f5f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F18u;
        // 0x2f5f1c: 0xae3200c0  sw          $s2, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f18) {
            ctx->pc = 0x2F5F7Cu;
            goto label_2f5f7c;
        }
    }
    ctx->pc = 0x2F5F20u;
label_2f5f20:
    // 0x2f5f20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F5F20u;
    {
        const bool branch_taken_0x2f5f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F20u;
        // 0x2f5f24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f20) {
            ctx->pc = 0x2F5F50u;
            goto label_2f5f50;
        }
    }
    ctx->pc = 0x2F5F28u;
    // 0x2f5f28: 0xc0bd67c  jal         func_2F59F0
    ctx->pc = 0x2F5F28u;
    SET_GPR_U32(ctx, 31, 0x2F5F30u);
    ctx->pc = 0x2F5F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F28u;
    // 0x2f5f2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F59F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F59F0u, 0x2F5F28u, 0x2F5F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F30u;
label_2f5f30:
    // 0x2f5f30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5F30u;
    {
        const bool branch_taken_0x2f5f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F30u;
        // 0x2f5f34: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f30) {
            ctx->pc = 0x2F5F40u;
            goto label_2f5f40;
        }
    }
    ctx->pc = 0x2F5F38u;
    // 0x2f5f38: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2F5F38u;
    {
        const bool branch_taken_0x2f5f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F38u;
        // 0x2f5f3c: 0x2402fc16  addiu       $v0, $zero, -0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f38) {
            ctx->pc = 0x2F6160u;
            goto label_2f6160;
        }
    }
    ctx->pc = 0x2F5F40u;
label_2f5f40:
    // 0x2f5f40: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2F5F40u;
    SET_GPR_U32(ctx, 31, 0x2F5F48u);
    ctx->pc = 0x2F5F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F40u;
    // 0x2f5f44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2F5F40u, 0x2F5F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F48u;
label_2f5f48:
    // 0x2f5f48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F5F48u;
    {
        const bool branch_taken_0x2f5f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F48u;
        // 0x2f5f4c: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f48) {
            ctx->pc = 0x2F5F80u;
            goto label_2f5f80;
        }
    }
    ctx->pc = 0x2F5F50u;
label_2f5f50:
    // 0x2f5f50: 0xc0be450  jal         func_2F9140
    ctx->pc = 0x2F5F50u;
    SET_GPR_U32(ctx, 31, 0x2F5F58u);
    ctx->pc = 0x2F5F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F50u;
    // 0x2f5f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9140u, 0x2F5F50u, 0x2F5F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F58u;
label_2f5f58:
    // 0x2f5f58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5F58u;
    {
        const bool branch_taken_0x2f5f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F58u;
        // 0x2f5f5c: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f58) {
            ctx->pc = 0x2F5F68u;
            goto label_2f5f68;
        }
    }
    ctx->pc = 0x2F5F60u;
    // 0x2f5f60: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x2F5F60u;
    {
        const bool branch_taken_0x2f5f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F60u;
        // 0x2f5f64: 0x2402fc16  addiu       $v0, $zero, -0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f60) {
            ctx->pc = 0x2F6160u;
            goto label_2f6160;
        }
    }
    ctx->pc = 0x2F5F68u;
label_2f5f68:
    // 0x2f5f68: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5F68u;
    {
        const bool branch_taken_0x2f5f68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F68u;
        // 0x2f5f6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f68) {
            ctx->pc = 0x2F5F7Cu;
            goto label_2f5f7c;
        }
    }
    ctx->pc = 0x2F5F70u;
    // 0x2f5f70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f5f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5f74: 0xc049c48  jal         func_127120
    ctx->pc = 0x2F5F74u;
    SET_GPR_U32(ctx, 31, 0x2F5F7Cu);
    ctx->pc = 0x2F5F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F74u;
    // 0x2f5f78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F5F74u, 0x2F5F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F7Cu;
label_2f5f7c:
    // 0x2f5f7c: 0xae3000c4  sw          $s0, 0xC4($s1)
    ctx->pc = 0x2f5f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 16));
label_2f5f80:
    // 0x2f5f80: 0x1000ff7e  b           . + 4 + (-0x82 << 2)
    ctx->pc = 0x2F5F80u;
    {
        const bool branch_taken_0x2f5f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F80u;
        // 0x2f5f84: 0xae3300c8  sw          $s3, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f80) {
            ctx->pc = 0x2F5D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F5F88u;
label_2f5f88:
    // 0x2f5f88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f5f8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f5f8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5f90: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2F5F90u;
    {
        const bool branch_taken_0x2f5f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F90u;
        // 0x2f5f94: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f90) {
            ctx->pc = 0x2F6168u;
            goto label_2f6168;
        }
    }
    ctx->pc = 0x2F5F98u;
label_2f5f98:
    // 0x2f5f98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f5f9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f5f9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5fa0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2F5FA0u;
    {
        const bool branch_taken_0x2f5fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FA0u;
        // 0x2f5fa4: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5fa0) {
            ctx->pc = 0x2F6168u;
            goto label_2f6168;
        }
    }
    ctx->pc = 0x2F5FA8u;
label_2f5fa8:
    // 0x2f5fa8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f5fac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f5facu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5fb0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2F5FB0u;
    {
        const bool branch_taken_0x2f5fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FB0u;
        // 0x2f5fb4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5fb0) {
            ctx->pc = 0x2F6168u;
            goto label_2f6168;
        }
    }
    ctx->pc = 0x2F5FB8u;
label_2f5fb8:
    // 0x2f5fb8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f5fbc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f5fbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5fc0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f5fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2f5fc4: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2F5FC4u;
    {
        const bool branch_taken_0x2f5fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FC4u;
        // 0x2f5fc8: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5fc4) {
            ctx->pc = 0x2F6168u;
            goto label_2f6168;
        }
    }
    ctx->pc = 0x2F5FCCu;
label_2f5fcc:
    // 0x2f5fcc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f5fd0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f5fd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5fd4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f5fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2f5fd8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2F5FD8u;
    {
        const bool branch_taken_0x2f5fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FD8u;
        // 0x2f5fdc: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5fd8) {
            ctx->pc = 0x2F6168u;
            goto label_2f6168;
        }
    }
    ctx->pc = 0x2F5FE0u;
label_2f5fe0:
    // 0x2f5fe0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2f5fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f5fe4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f5fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f5fe8: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x2f5fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x2f5fec: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x2f5fecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x2f5ff0: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x2f5ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x2f5ff4: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x2f5ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ff8: 0x1000ff60  b           . + 4 + (-0xA0 << 2)
    ctx->pc = 0x2F5FF8u;
    {
        const bool branch_taken_0x2f5ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FF8u;
        // 0x2f5ffc: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ff8) {
            ctx->pc = 0x2F5D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F6000u;
label_2f6000:
    // 0x2f6000: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2f6000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f6004: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f6004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6008: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x2f6008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x2f600c: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x2f600cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
    // 0x2f6010: 0xae230120  sw          $v1, 0x120($s1)
    ctx->pc = 0x2f6010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 3));
    // 0x2f6014: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x2f6014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6018: 0x1000ff58  b           . + 4 + (-0xA8 << 2)
    ctx->pc = 0x2F6018u;
    {
        const bool branch_taken_0x2f6018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6018u;
        // 0x2f601c: 0xae220128  sw          $v0, 0x128($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6018) {
            ctx->pc = 0x2F5D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F6020u;
label_2f6020:
    // 0x2f6020: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2f6020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f6024: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f6024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6028: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x2f6028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x2f602c: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x2f602cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
    // 0x2f6030: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x2f6030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
    // 0x2f6034: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x2f6034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6038: 0x1000ff50  b           . + 4 + (-0xB0 << 2)
    ctx->pc = 0x2F6038u;
    {
        const bool branch_taken_0x2f6038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6038u;
        // 0x2f603c: 0xae2200ac  sw          $v0, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6038) {
            ctx->pc = 0x2F5D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F6040u;
label_2f6040:
    // 0x2f6040: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2f6040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f6044: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2f6044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6048: 0x8ca5fff8  lw          $a1, -0x8($a1)
    ctx->pc = 0x2f6048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x2f604c: 0x28a21000  slti        $v0, $a1, 0x1000
    ctx->pc = 0x2f604cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x2f6050: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2F6050u;
    {
        const bool branch_taken_0x2f6050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6050u;
        // 0x2f6054: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6050) {
            ctx->pc = 0x2F6160u;
            goto label_2f6160;
        }
    }
    ctx->pc = 0x2F6058u;
    // 0x2f6058: 0x1860003f  blez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2F6058u;
    {
        const bool branch_taken_0x2f6058 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6058u;
        // 0x2f605c: 0x28620080  slti        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6058) {
            ctx->pc = 0x2F6158u;
            goto label_2f6158;
        }
    }
    ctx->pc = 0x2F6060u;
    // 0x2f6060: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2F6060u;
    {
        const bool branch_taken_0x2f6060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6060u;
        // 0x2f6064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6060) {
            ctx->pc = 0x2F6158u;
            goto label_2f6158;
        }
    }
    ctx->pc = 0x2F6068u;
    // 0x2f6068: 0xae250094  sw          $a1, 0x94($s1)
    ctx->pc = 0x2f6068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 5));
    // 0x2f606c: 0xae230098  sw          $v1, 0x98($s1)
    ctx->pc = 0x2f606cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
    // 0x2f6070: 0xae250054  sw          $a1, 0x54($s1)
    ctx->pc = 0x2f6070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 5));
    // 0x2f6074: 0xc0bdf0a  jal         func_2F7C28
    ctx->pc = 0x2F6074u;
    SET_GPR_U32(ctx, 31, 0x2F607Cu);
    ctx->pc = 0x2F6078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6074u;
    // 0x2f6078: 0xae230058  sw          $v1, 0x58($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7C28u, 0x2F6074u, 0x2F607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F607Cu;
label_2f607c:
    // 0x2f607c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f607cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6080: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2f6080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f6084: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2F6084u;
    {
        const bool branch_taken_0x2f6084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6084u;
        // 0x2f6088: 0x2180b  movn        $v1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6084) {
            ctx->pc = 0x2F6168u;
            goto label_2f6168;
        }
    }
    ctx->pc = 0x2F608Cu;
    // 0x2f608c: 0x0  nop
    ctx->pc = 0x2f608cu;
    // NOP
label_2f6090:
    // 0x2f6090: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f6090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6094: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f6094u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6098: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2F6098u;
    {
        const bool branch_taken_0x2f6098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6098u;
        // 0x2f609c: 0xae220174  sw          $v0, 0x174($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6098) {
            ctx->pc = 0x2F6168u;
            goto label_2f6168;
        }
    }
    ctx->pc = 0x2F60A0u;
label_2f60a0:
    // 0x2f60a0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2f60a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f60a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f60a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f60a8: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x2f60a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x2f60ac: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x2f60acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x2f60b0: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x2f60b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
    // 0x2f60b4: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x2f60b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f60b8: 0x1000ff30  b           . + 4 + (-0xD0 << 2)
    ctx->pc = 0x2F60B8u;
    {
        const bool branch_taken_0x2f60b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60B8u;
        // 0x2f60bc: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60b8) {
            ctx->pc = 0x2F5D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F60C0u;
label_2f60c0:
    // 0x2f60c0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f60c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f60c4: 0x2c820200  sltiu       $v0, $a0, 0x200
    ctx->pc = 0x2f60c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x2f60c8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F60C8u;
    {
        const bool branch_taken_0x2f60c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60C8u;
        // 0x2f60cc: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60c8) {
            ctx->pc = 0x2F6160u;
            goto label_2f6160;
        }
    }
    ctx->pc = 0x2F60D0u;
    // 0x2f60d0: 0x1000ff2a  b           . + 4 + (-0xD6 << 2)
    ctx->pc = 0x2F60D0u;
    {
        const bool branch_taken_0x2f60d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60D0u;
        // 0x2f60d4: 0xae240084  sw          $a0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60d0) {
            ctx->pc = 0x2F5D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F60D8u;
label_2f60d8:
    // 0x2f60d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f60d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f60dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f60dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f60e0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2F60E0u;
    {
        const bool branch_taken_0x2f60e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60E0u;
        // 0x2f60e4: 0xae2200cc  sw          $v0, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60e0) {
            ctx->pc = 0x2F6168u;
            goto label_2f6168;
        }
    }
    ctx->pc = 0x2F60E8u;
label_2f60e8:
    // 0x2f60e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f60ec: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F60ECu;
    {
        const bool branch_taken_0x2f60ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f60ec) {
            ctx->pc = 0x2F60F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F60ECu;
            // 0x2f60f0: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6160u;
            goto label_2f6160;
        }
    }
    ctx->pc = 0x2F60F4u;
    // 0x2f60f4: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x2f60f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x2f60f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F60F8u;
    {
        const bool branch_taken_0x2f60f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F60FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60F8u;
        // 0x2f60fc: 0xae20017c  sw          $zero, 0x17C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60f8) {
            ctx->pc = 0x2F6118u;
            goto label_2f6118;
        }
    }
    ctx->pc = 0x2F6100u;
label_2f6100:
    // 0x2f6100: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2f6100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f6104: 0x8ca2fff8  lw          $v0, -0x8($a1)
    ctx->pc = 0x2f6104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x2f6108: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F6108u;
    {
        const bool branch_taken_0x2f6108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6108u;
        // 0x2f610c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6108) {
            ctx->pc = 0x2F6158u;
            goto label_2f6158;
        }
    }
    ctx->pc = 0x2F6110u;
    // 0x2f6110: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x2f6110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x2f6114: 0xae23017c  sw          $v1, 0x17C($s1)
    ctx->pc = 0x2f6114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 3));
label_2f6118:
    // 0x2f6118: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x2f6118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f611c: 0x1000ff17  b           . + 4 + (-0xE9 << 2)
    ctx->pc = 0x2F611Cu;
    {
        const bool branch_taken_0x2f611c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F611Cu;
        // 0x2f6120: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f611c) {
            ctx->pc = 0x2F5D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F6124u;
label_2f6124:
    // 0x2f6124: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2f6124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6128: 0xc0bd5e0  jal         func_2F5780
    ctx->pc = 0x2F6128u;
    SET_GPR_U32(ctx, 31, 0x2F6130u);
    ctx->pc = 0x2F612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6128u;
    // 0x2f612c: 0x8e2400bc  lw          $a0, 0xBC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5780u, 0x2F6128u, 0x2F6130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6130u;
label_2f6130:
    // 0x2f6130: 0x1000ff12  b           . + 4 + (-0xEE << 2)
    ctx->pc = 0x2F6130u;
    {
        const bool branch_taken_0x2f6130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6130u;
        // 0x2f6134: 0xae2200bc  sw          $v0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6130) {
            ctx->pc = 0x2F5D7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F6138u;
label_2f6138:
    // 0x2f6138: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f6138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f613c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f613cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6140: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F6140u;
    {
        const bool branch_taken_0x2f6140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6140u;
        // 0x2f6144: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6140) {
            ctx->pc = 0x2F6168u;
            goto label_2f6168;
        }
    }
    ctx->pc = 0x2F6148u;
label_2f6148:
    // 0x2f6148: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f6148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f614c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f614cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6150: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6150u;
    {
        const bool branch_taken_0x2f6150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6150u;
        // 0x2f6154: 0xae220180  sw          $v0, 0x180($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6150) {
            ctx->pc = 0x2F6168u;
            goto label_2f6168;
        }
    }
    ctx->pc = 0x2F6158u;
label_2f6158:
    // 0x2f6158: 0x2402fc14  addiu       $v0, $zero, -0x3EC
    ctx->pc = 0x2f6158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
    // 0x2f615c: 0x0  nop
    ctx->pc = 0x2f615cu;
    // NOP
label_2f6160:
    // 0x2f6160: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2f6160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x2f6164: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f6164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f6168:
    // 0x2f6168: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f6168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f616c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f616cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6170: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f6170u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6174: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f6174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6178: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f6178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f617c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f617cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6180: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6180u;
        // 0x2f6184: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6188u;
}
