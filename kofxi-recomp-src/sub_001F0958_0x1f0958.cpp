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

// Function: sub_001F0958
// Address: 0x1f0958 - 0x1f0b98
void sub_001F0958_0x1f0958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0958_0x1f0958");
#endif

    switch (ctx->pc) {
        case 0x1f09a0u: goto label_1f09a0;
        case 0x1f09c0u: goto label_1f09c0;
        case 0x1f09e0u: goto label_1f09e0;
        case 0x1f0a44u: goto label_1f0a44;
        case 0x1f0a54u: goto label_1f0a54;
        case 0x1f0a9cu: goto label_1f0a9c;
        case 0x1f0ab4u: goto label_1f0ab4;
        case 0x1f0ac8u: goto label_1f0ac8;
        case 0x1f0b34u: goto label_1f0b34;
        case 0x1f0b54u: goto label_1f0b54;
        case 0x1f0b70u: goto label_1f0b70;
        default: break;
    }

    ctx->pc = 0x1f0958u;

    // 0x1f0958: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f0958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f095c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1f095cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1f0960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f0960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0964: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1f0964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1f0968: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f0968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f096c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1f096cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1f0970: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f0970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0974: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f0974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f0978: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f0978u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f097c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1f097cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1f0980: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f0980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0984: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1f0984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1f0988: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1f0988u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1f098c: 0x8e302020  lw          $s0, 0x2020($s1)
    ctx->pc = 0x1f098cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8224)));
    // 0x1f0990: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1f0990u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1f0994: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1f0994u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x1f0998: 0xc07aa2a  jal         func_1EA8A8
    ctx->pc = 0x1F0998u;
    SET_GPR_U32(ctx, 31, 0x1F09A0u);
    ctx->pc = 0x1F099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0998u;
    // 0x1f099c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA8A8u, 0x1F0998u, 0x1F09A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09A0u;
label_1f09a0:
    // 0x1f09a0: 0x54400076  bnel        $v0, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x1F09A0u;
    {
        const bool branch_taken_0x1f09a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f09a0) {
            ctx->pc = 0x1F09A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F09A0u;
            // 0x1f09a4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0B7Cu;
            goto label_1f0b7c;
        }
    }
    ctx->pc = 0x1F09A8u;
    // 0x1f09a8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1f09a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f09ac: 0x10600072  beqz        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x1F09ACu;
    {
        const bool branch_taken_0x1f09ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09ACu;
        // 0x1f09b0: 0x240500ce  addiu       $a1, $zero, 0xCE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09ac) {
            ctx->pc = 0x1F0B78u;
            goto label_1f0b78;
        }
    }
    ctx->pc = 0x1F09B4u;
    // 0x1f09b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f09b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f09b8: 0xc07c392  jal         func_1F0E48
    ctx->pc = 0x1F09B8u;
    SET_GPR_U32(ctx, 31, 0x1F09C0u);
    ctx->pc = 0x1F09BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F09B8u;
    // 0x1f09bc: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0E48u, 0x1F09B8u, 0x1F09C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09C0u;
label_1f09c0:
    // 0x1f09c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f09c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f09c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f09c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f09c8: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F09C8u;
    {
        const bool branch_taken_0x1f09c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F09CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09C8u;
        // 0x1f09cc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09c8) {
            ctx->pc = 0x1F0A18u;
            goto label_1f0a18;
        }
    }
    ctx->pc = 0x1F09D0u;
    // 0x1f09d0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F09D0u;
    {
        const bool branch_taken_0x1f09d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09D0u;
        // 0x1f09d4: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09d0) {
            ctx->pc = 0x1F09E8u;
            goto label_1f09e8;
        }
    }
    ctx->pc = 0x1F09D8u;
    // 0x1f09d8: 0xc07c356  jal         func_1F0D58
    ctx->pc = 0x1F09D8u;
    SET_GPR_U32(ctx, 31, 0x1F09E0u);
    ctx->pc = 0x1F09DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F09D8u;
    // 0x1f09dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0D58u, 0x1F09D8u, 0x1F09E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09E0u;
label_1f09e0:
    // 0x1f09e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F09E0u;
    {
        const bool branch_taken_0x1f09e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09E0u;
        // 0x1f09e4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09e0) {
            ctx->pc = 0x1F0A00u;
            goto label_1f0a00;
        }
    }
    ctx->pc = 0x1F09E8u;
label_1f09e8:
    // 0x1f09e8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1f09e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f09ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f09f0: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1f09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1f09f4: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1f09f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f09f8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1f09f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1f09fc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1f09fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1f0a00:
    // 0x1f0a00: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f0a04: 0x1840005c  blez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1F0A04u;
    {
        const bool branch_taken_0x1f0a04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F0A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A04u;
        // 0x1f0a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a04) {
            ctx->pc = 0x1F0B78u;
            goto label_1f0b78;
        }
    }
    ctx->pc = 0x1F0A0Cu;
    // 0x1f0a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0a10: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1F0A10u;
    {
        const bool branch_taken_0x1f0a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A10u;
        // 0x1f0a14: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a10) {
            ctx->pc = 0x1F0B74u;
            goto label_1f0b74;
        }
    }
    ctx->pc = 0x1F0A18u;
label_1f0a18:
    // 0x1f0a18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0a1c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1f0a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1f0a20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f0a20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a24: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x1f0a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1f0a28: 0x14800053  bnez        $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1F0A28u;
    {
        const bool branch_taken_0x1f0a28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A28u;
        // 0x1f0a2c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a28) {
            ctx->pc = 0x1F0B78u;
            goto label_1f0b78;
        }
    }
    ctx->pc = 0x1F0A30u;
    // 0x1f0a30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f0a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a34: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x1f0a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1f0a38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a3c: 0xc07ab32  jal         func_1EACC8
    ctx->pc = 0x1F0A3Cu;
    SET_GPR_U32(ctx, 31, 0x1F0A44u);
    ctx->pc = 0x1F0A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0A3Cu;
    // 0x1f0a40: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EACC8u, 0x1F0A3Cu, 0x1F0A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A44u;
label_1f0a44:
    // 0x1f0a44: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1f0a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0a48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f0a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a4c: 0xc07c2e6  jal         func_1F0B98
    ctx->pc = 0x1F0A4Cu;
    SET_GPR_U32(ctx, 31, 0x1F0A54u);
    ctx->pc = 0x1F0A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0A4Cu;
    // 0x1f0a50: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0B98u, 0x1F0A4Cu, 0x1F0A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A54u;
label_1f0a54:
    // 0x1f0a54: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F0A54u;
    {
        const bool branch_taken_0x1f0a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A54u;
        // 0x1f0a58: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a54) {
            ctx->pc = 0x1F0AB4u;
            goto label_1f0ab4;
        }
    }
    ctx->pc = 0x1F0A5Cu;
    // 0x1f0a5c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0A5Cu;
    {
        const bool branch_taken_0x1f0a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A5Cu;
        // 0x1f0a60: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a5c) {
            ctx->pc = 0x1F0A78u;
            goto label_1f0a78;
        }
    }
    ctx->pc = 0x1F0A64u;
    // 0x1f0a64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f0a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0a68: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1f0a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f0a6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0A6Cu;
    {
        const bool branch_taken_0x1f0a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A6Cu;
        // 0x1f0a70: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a6c) {
            ctx->pc = 0x1F0A80u;
            goto label_1f0a80;
        }
    }
    ctx->pc = 0x1F0A74u;
    // 0x1f0a74: 0x0  nop
    ctx->pc = 0x1f0a74u;
    // NOP
label_1f0a78:
    // 0x1f0a78: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1f0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0a7c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1f0a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f0a80:
    // 0x1f0a80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f0a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f0a84: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F0A84u;
    {
        const bool branch_taken_0x1f0a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F0A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A84u;
        // 0x1f0a88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a84) {
            ctx->pc = 0x1F0AB4u;
            goto label_1f0ab4;
        }
    }
    ctx->pc = 0x1F0A8Cu;
    // 0x1f0a8c: 0x240500cc  addiu       $a1, $zero, 0xCC
    ctx->pc = 0x1f0a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x1f0a90: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x1f0a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1f0a94: 0xc07c3e8  jal         func_1F0FA0
    ctx->pc = 0x1F0A94u;
    SET_GPR_U32(ctx, 31, 0x1F0A9Cu);
    ctx->pc = 0x1F0A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0A94u;
    // 0x1f0a98: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0FA0u, 0x1F0A94u, 0x1F0A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A9Cu;
label_1f0a9c:
    // 0x1f0a9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0aa0: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1f0aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f0aa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f0aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0aa8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f0aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0aac: 0xc07ab4e  jal         func_1EAD38
    ctx->pc = 0x1F0AACu;
    SET_GPR_U32(ctx, 31, 0x1F0AB4u);
    ctx->pc = 0x1F0AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0AACu;
    // 0x1f0ab0: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD38u, 0x1F0AACu, 0x1F0AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0AB4u;
label_1f0ab4:
    // 0x1f0ab4: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1f0ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1f0ab8: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F0AB8u;
    {
        const bool branch_taken_0x1f0ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ab8) {
            ctx->pc = 0x1F0B4Cu;
            goto label_1f0b4c;
        }
    }
    ctx->pc = 0x1F0AC0u;
    // 0x1f0ac0: 0xc0762c0  jal         func_1D8B00
    ctx->pc = 0x1F0AC0u;
    SET_GPR_U32(ctx, 31, 0x1F0AC8u);
    ctx->pc = 0x1D8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B00u, 0x1F0AC0u, 0x1F0AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0AC8u;
label_1f0ac8:
    // 0x1f0ac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f0ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0acc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f0accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f0ad0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1f0ad0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ad4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F0AD4u;
    {
        const bool branch_taken_0x1f0ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AD4u;
        // 0x1f0ad8: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ad4) {
            ctx->pc = 0x1F0B00u;
            goto label_1f0b00;
        }
    }
    ctx->pc = 0x1F0ADCu;
    // 0x1f0adc: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x1f0adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1f0ae0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F0AE0u;
    {
        const bool branch_taken_0x1f0ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AE0u;
        // 0x1f0ae4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ae0) {
            ctx->pc = 0x1F0B60u;
            goto label_1f0b60;
        }
    }
    ctx->pc = 0x1F0AE8u;
    // 0x1f0ae8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0aec: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F0AECu;
    {
        const bool branch_taken_0x1f0aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AECu;
        // 0x1f0af0: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0aec) {
            ctx->pc = 0x1F0B18u;
            goto label_1f0b18;
        }
    }
    ctx->pc = 0x1F0AF4u;
    // 0x1f0af4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1F0AF4u;
    {
        const bool branch_taken_0x1f0af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AF4u;
        // 0x1f0af8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0af4) {
            ctx->pc = 0x1F0B68u;
            goto label_1f0b68;
        }
    }
    ctx->pc = 0x1F0AFCu;
    // 0x1f0afc: 0x0  nop
    ctx->pc = 0x1f0afcu;
    // NOP
label_1f0b00:
    // 0x1f0b00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0b04: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1f0b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1f0b08: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F0B08u;
    {
        const bool branch_taken_0x1f0b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B08u;
        // 0x1f0b0c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b08) {
            ctx->pc = 0x1F0B60u;
            goto label_1f0b60;
        }
    }
    ctx->pc = 0x1F0B10u;
    // 0x1f0b10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0B10u;
    {
        const bool branch_taken_0x1f0b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B10u;
        // 0x1f0b14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b10) {
            ctx->pc = 0x1F0B2Cu;
            goto label_1f0b2c;
        }
    }
    ctx->pc = 0x1F0B18u;
label_1f0b18:
    // 0x1f0b18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f0b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0b1c: 0x30420048  andi        $v0, $v0, 0x48
    ctx->pc = 0x1f0b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)72);
    // 0x1f0b20: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F0B20u;
    {
        const bool branch_taken_0x1f0b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B20u;
        // 0x1f0b24: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b20) {
            ctx->pc = 0x1F0B60u;
            goto label_1f0b60;
        }
    }
    ctx->pc = 0x1F0B28u;
    // 0x1f0b28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f0b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b2c:
    // 0x1f0b2c: 0xc07c392  jal         func_1F0E48
    ctx->pc = 0x1F0B2Cu;
    SET_GPR_U32(ctx, 31, 0x1F0B34u);
    ctx->pc = 0x1F0B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0B2Cu;
    // 0x1f0b30: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0E48u, 0x1F0B2Cu, 0x1F0B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B34u;
label_1f0b34:
    // 0x1f0b34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f0b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0b38: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0B38u;
    {
        const bool branch_taken_0x1f0b38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0b38) {
            ctx->pc = 0x1F0B4Cu;
            goto label_1f0b4c;
        }
    }
    ctx->pc = 0x1F0B40u;
    // 0x1f0b40: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1f0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1f0b44: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0B44u;
    {
        const bool branch_taken_0x1f0b44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B44u;
        // 0x1f0b48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b44) {
            ctx->pc = 0x1F0B68u;
            goto label_1f0b68;
        }
    }
    ctx->pc = 0x1F0B4Cu;
label_1f0b4c:
    // 0x1f0b4c: 0xc07c370  jal         func_1F0DC0
    ctx->pc = 0x1F0B4Cu;
    SET_GPR_U32(ctx, 31, 0x1F0B54u);
    ctx->pc = 0x1F0B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0B4Cu;
    // 0x1f0b50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0DC0u, 0x1F0B4Cu, 0x1F0B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B54u;
label_1f0b54:
    // 0x1f0b54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F0B54u;
    {
        const bool branch_taken_0x1f0b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B54u;
        // 0x1f0b58: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b54) {
            ctx->pc = 0x1F0B7Cu;
            goto label_1f0b7c;
        }
    }
    ctx->pc = 0x1F0B5Cu;
    // 0x1f0b5c: 0x0  nop
    ctx->pc = 0x1f0b5cu;
    // NOP
label_1f0b60:
    // 0x1f0b60: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1f0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1f0b64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f0b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b68:
    // 0x1f0b68: 0xc07c356  jal         func_1F0D58
    ctx->pc = 0x1F0B68u;
    SET_GPR_U32(ctx, 31, 0x1F0B70u);
    ctx->pc = 0x1F0B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0B68u;
    // 0x1f0b6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0D58u, 0x1F0B68u, 0x1F0B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B70u;
label_1f0b70:
    // 0x1f0b70: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1f0b70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1f0b74:
    // 0x1f0b74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f0b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b78:
    // 0x1f0b78: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1f0b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f0b7c:
    // 0x1f0b7c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1f0b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f0b80: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1f0b80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0b84: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1f0b84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f0b88: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f0b88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0b8c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1f0b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f0b90: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B90u;
        // 0x1f0b94: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0B98u;
}
