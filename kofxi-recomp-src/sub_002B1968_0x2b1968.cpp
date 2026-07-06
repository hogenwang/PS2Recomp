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

// Function: sub_002B1968
// Address: 0x2b1968 - 0x2b1b08
void sub_002B1968_0x2b1968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1968_0x2b1968");
#endif

    switch (ctx->pc) {
        case 0x2b19a0u: goto label_2b19a0;
        case 0x2b19c4u: goto label_2b19c4;
        case 0x2b19e8u: goto label_2b19e8;
        case 0x2b19f4u: goto label_2b19f4;
        case 0x2b19fcu: goto label_2b19fc;
        case 0x2b1a14u: goto label_2b1a14;
        case 0x2b1a2cu: goto label_2b1a2c;
        case 0x2b1a68u: goto label_2b1a68;
        case 0x2b1a88u: goto label_2b1a88;
        case 0x2b1aacu: goto label_2b1aac;
        case 0x2b1ac8u: goto label_2b1ac8;
        default: break;
    }

    ctx->pc = 0x2b1968u;

    // 0x2b1968: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b1968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b196c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b196cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b1970: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b1970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b1974: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2b1974u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1978: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b1978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b197c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2b197cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2b1980: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b1980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b1984: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b1984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1988: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2b1988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2b198c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b198cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b1990: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2b1990u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1994: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b1994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b1998: 0xc0ab52e  jal         func_2AD4B8
    ctx->pc = 0x2B1998u;
    SET_GPR_U32(ctx, 31, 0x2B19A0u);
    ctx->pc = 0x2B199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1998u;
    // 0x2b199c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD4B8u, 0x2B1998u, 0x2B19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19A0u;
label_2b19a0:
    // 0x2b19a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b19a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b19a4: 0x6210009  bgez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B19A4u;
    {
        const bool branch_taken_0x2b19a4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2B19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19A4u;
        // 0x2b19a8: 0x1190c0  sll         $s2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b19a4) {
            ctx->pc = 0x2B19CCu;
            goto label_2b19cc;
        }
    }
    ctx->pc = 0x2B19ACu;
    // 0x2b19ac: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b19acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b19b0: 0x240500c2  addiu       $a1, $zero, 0xC2
    ctx->pc = 0x2b19b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x2b19b4: 0x240600f7  addiu       $a2, $zero, 0xF7
    ctx->pc = 0x2b19b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x2b19b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b19b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b19bc: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B19BCu;
    SET_GPR_U32(ctx, 31, 0x2B19C4u);
    ctx->pc = 0x2B19C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B19BCu;
    // 0x2b19c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B19BCu, 0x2B19C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19C4u;
label_2b19c4:
    // 0x2b19c4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2B19C4u;
    {
        const bool branch_taken_0x2b19c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B19C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19C4u;
        // 0x2b19c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b19c4) {
            ctx->pc = 0x2B1AE0u;
            goto label_2b1ae0;
        }
    }
    ctx->pc = 0x2B19CCu;
label_2b19cc:
    // 0x2b19cc: 0x26b30040  addiu       $s3, $s5, 0x40
    ctx->pc = 0x2b19ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x2b19d0: 0x272a021  addu        $s4, $s3, $s2
    ctx->pc = 0x2b19d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2b19d4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2b19d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b19d8: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2B19D8u;
    {
        const bool branch_taken_0x2b19d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b19d8) {
            ctx->pc = 0x2B1A74u;
            goto label_2b1a74;
        }
    }
    ctx->pc = 0x2B19E0u;
    // 0x2b19e0: 0xc0a39c0  jal         func_28E700
    ctx->pc = 0x2B19E0u;
    SET_GPR_U32(ctx, 31, 0x2B19E8u);
    ctx->pc = 0x28E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E700u, 0x2B19E0u, 0x2B19E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19E8u;
label_2b19e8:
    // 0x2b19e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b19e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b19ec: 0xc0aef38  jal         func_2BBCE0
    ctx->pc = 0x2B19ECu;
    SET_GPR_U32(ctx, 31, 0x2B19F4u);
    ctx->pc = 0x2B19F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B19ECu;
    // 0x2b19f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCE0u, 0x2B19ECu, 0x2B19F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19F4u;
label_2b19f4:
    // 0x2b19f4: 0xc0a56b6  jal         func_295AD8
    ctx->pc = 0x2B19F4u;
    SET_GPR_U32(ctx, 31, 0x2B19FCu);
    ctx->pc = 0x295AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AD8u, 0x2B19F4u, 0x2B19FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19FCu;
label_2b19fc:
    // 0x2b19fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b19fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b1a00: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b1a04: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1A04u;
    {
        const bool branch_taken_0x2b1a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1a04) {
            ctx->pc = 0x2B1A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1A04u;
            // 0x2b1a08: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1A24u;
            goto label_2b1a24;
        }
    }
    ctx->pc = 0x2B1A0Cu;
    // 0x2b1a0c: 0xc0aa582  jal         func_2A9608
    ctx->pc = 0x2B1A0Cu;
    SET_GPR_U32(ctx, 31, 0x2B1A14u);
    ctx->pc = 0x2B1A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A0Cu;
    // 0x2b1a10: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9608u, 0x2B1A0Cu, 0x2B1A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A14u;
label_2b1a14:
    // 0x2b1a14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b1a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b1a18: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B1A18u;
    {
        const bool branch_taken_0x2b1a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1a18) {
            ctx->pc = 0x2B1A74u;
            goto label_2b1a74;
        }
    }
    ctx->pc = 0x2B1A20u;
    // 0x2b1a20: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2b1a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2b1a24:
    // 0x2b1a24: 0xc0a3cba  jal         func_28F2E8
    ctx->pc = 0x2B1A24u;
    SET_GPR_U32(ctx, 31, 0x2B1A2Cu);
    ctx->pc = 0x2B1A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A24u;
    // 0x2b1a28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F2E8u, 0x2B1A24u, 0x2B1A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A2Cu;
label_2b1a2c:
    // 0x2b1a2c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B1A2Cu;
    {
        const bool branch_taken_0x2b1a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A2Cu;
        // 0x2b1a30: 0x2622fffd  addiu       $v0, $s1, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a2c) {
            ctx->pc = 0x2B1A74u;
            goto label_2b1a74;
        }
    }
    ctx->pc = 0x2B1A34u;
    // 0x2b1a34: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b1a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b1a38: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B1A38u;
    {
        const bool branch_taken_0x2b1a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A38u;
        // 0x2b1a3c: 0x3a240003  xori        $a0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a38) {
            ctx->pc = 0x2B1A70u;
            goto label_2b1a70;
        }
    }
    ctx->pc = 0x2B1A40u;
    // 0x2b1a40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b1a44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b1a48: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2b1a48u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2b1a4c: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x2b1a4cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b1a50: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x2b1a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2b1a54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b1a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b1a58: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1A58u;
    {
        const bool branch_taken_0x2b1a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1a58) {
            ctx->pc = 0x2B1A74u;
            goto label_2b1a74;
        }
    }
    ctx->pc = 0x2B1A60u;
    // 0x2b1a60: 0xc0a3cba  jal         func_28F2E8
    ctx->pc = 0x2B1A60u;
    SET_GPR_U32(ctx, 31, 0x2B1A68u);
    ctx->pc = 0x2B1A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A60u;
    // 0x2b1a64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F2E8u, 0x2B1A60u, 0x2B1A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A68u;
label_2b1a68:
    // 0x2b1a68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1A68u;
    {
        const bool branch_taken_0x2b1a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A68u;
        // 0x2b1a6c: 0x2c560001  sltiu       $s6, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a68) {
            ctx->pc = 0x2B1A74u;
            goto label_2b1a74;
        }
    }
    ctx->pc = 0x2B1A70u;
label_2b1a70:
    // 0x2b1a70: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2b1a70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1a74:
    // 0x2b1a74: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1A74u;
    {
        const bool branch_taken_0x2b1a74 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A74u;
        // 0x2b1a78: 0x26a20044  addiu       $v0, $s5, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a74) {
            ctx->pc = 0x2B1A94u;
            goto label_2b1a94;
        }
    }
    ctx->pc = 0x2B1A7Cu;
    // 0x2b1a7c: 0x2728021  addu        $s0, $s3, $s2
    ctx->pc = 0x2b1a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2b1a80: 0xc0a390c  jal         func_28E430
    ctx->pc = 0x2B1A80u;
    SET_GPR_U32(ctx, 31, 0x2B1A88u);
    ctx->pc = 0x2B1A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A80u;
    // 0x2b1a84: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E430u, 0x2B1A80u, 0x2B1A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A88u;
label_2b1a88:
    // 0x2b1a88: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b1a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2b1a8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2B1A8Cu;
    {
        const bool branch_taken_0x2b1a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A8Cu;
        // 0x2b1a90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a8c) {
            ctx->pc = 0x2B1AE0u;
            goto label_2b1ae0;
        }
    }
    ctx->pc = 0x2B1A94u;
label_2b1a94:
    // 0x2b1a94: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x2b1a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2b1a98: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b1a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b1a9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1A9Cu;
    {
        const bool branch_taken_0x2b1a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A9Cu;
        // 0x2b1aa0: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a9c) {
            ctx->pc = 0x2B1AB0u;
            goto label_2b1ab0;
        }
    }
    ctx->pc = 0x2B1AA4u;
    // 0x2b1aa4: 0xc0a3d02  jal         func_28F408
    ctx->pc = 0x2B1AA4u;
    SET_GPR_U32(ctx, 31, 0x2B1AACu);
    ctx->pc = 0x28F408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F408u, 0x2B1AA4u, 0x2B1AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1AACu;
label_2b1aac:
    // 0x2b1aac: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2b1aacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_2b1ab0:
    // 0x2b1ab0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2b1ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2b1ab4: 0x24e7d420  addiu       $a3, $a3, -0x2BE0
    ctx->pc = 0x2b1ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956064));
    // 0x2b1ab8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b1ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1abc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2b1abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b1ac0: 0xc0a8b46  jal         func_2A2D18
    ctx->pc = 0x2B1AC0u;
    SET_GPR_U32(ctx, 31, 0x2B1AC8u);
    ctx->pc = 0x2B1AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1AC0u;
    // 0x2b1ac4: 0x2408011a  addiu       $t0, $zero, 0x11A (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D18u, 0x2B1AC0u, 0x2B1AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1AC8u;
label_2b1ac8:
    // 0x2b1ac8: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x2b1ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2b1acc: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2b1accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2b1ad0: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2b1ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2b1ad4: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x2b1ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x2b1ad8: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x2b1ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x2b1adc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1ae0:
    // 0x2b1ae0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2b1ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b1ae4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2b1ae4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b1ae8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b1ae8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b1aec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b1aecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b1af0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b1af0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1af4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b1af4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1af8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b1af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1afc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b1afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1b00: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B00u;
        // 0x2b1b04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1B08u;
}
