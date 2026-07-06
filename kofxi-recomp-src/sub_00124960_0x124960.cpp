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

// Function: sub_00124960
// Address: 0x124960 - 0x124a70
void sub_00124960_0x124960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124960_0x124960");
#endif

    switch (ctx->pc) {
        case 0x124960u: goto label_124960;
        case 0x124964u: goto label_124964;
        case 0x124968u: goto label_124968;
        case 0x12496cu: goto label_12496c;
        case 0x124970u: goto label_124970;
        case 0x124974u: goto label_124974;
        case 0x124978u: goto label_124978;
        case 0x12497cu: goto label_12497c;
        case 0x124980u: goto label_124980;
        case 0x124984u: goto label_124984;
        case 0x124988u: goto label_124988;
        case 0x12498cu: goto label_12498c;
        case 0x124990u: goto label_124990;
        case 0x124994u: goto label_124994;
        case 0x124998u: goto label_124998;
        case 0x12499cu: goto label_12499c;
        case 0x1249a0u: goto label_1249a0;
        case 0x1249a4u: goto label_1249a4;
        case 0x1249a8u: goto label_1249a8;
        case 0x1249acu: goto label_1249ac;
        case 0x1249b0u: goto label_1249b0;
        case 0x1249b4u: goto label_1249b4;
        case 0x1249b8u: goto label_1249b8;
        case 0x1249bcu: goto label_1249bc;
        case 0x1249c0u: goto label_1249c0;
        case 0x1249c4u: goto label_1249c4;
        case 0x1249c8u: goto label_1249c8;
        case 0x1249ccu: goto label_1249cc;
        case 0x1249d0u: goto label_1249d0;
        case 0x1249d4u: goto label_1249d4;
        case 0x1249d8u: goto label_1249d8;
        case 0x1249dcu: goto label_1249dc;
        case 0x1249e0u: goto label_1249e0;
        case 0x1249e4u: goto label_1249e4;
        case 0x1249e8u: goto label_1249e8;
        case 0x1249ecu: goto label_1249ec;
        case 0x1249f0u: goto label_1249f0;
        case 0x1249f4u: goto label_1249f4;
        case 0x1249f8u: goto label_1249f8;
        case 0x1249fcu: goto label_1249fc;
        case 0x124a00u: goto label_124a00;
        case 0x124a04u: goto label_124a04;
        case 0x124a08u: goto label_124a08;
        case 0x124a0cu: goto label_124a0c;
        case 0x124a10u: goto label_124a10;
        case 0x124a14u: goto label_124a14;
        case 0x124a18u: goto label_124a18;
        case 0x124a1cu: goto label_124a1c;
        case 0x124a20u: goto label_124a20;
        case 0x124a24u: goto label_124a24;
        case 0x124a28u: goto label_124a28;
        case 0x124a2cu: goto label_124a2c;
        case 0x124a30u: goto label_124a30;
        case 0x124a34u: goto label_124a34;
        case 0x124a38u: goto label_124a38;
        case 0x124a3cu: goto label_124a3c;
        case 0x124a40u: goto label_124a40;
        case 0x124a44u: goto label_124a44;
        case 0x124a48u: goto label_124a48;
        case 0x124a4cu: goto label_124a4c;
        case 0x124a50u: goto label_124a50;
        case 0x124a54u: goto label_124a54;
        case 0x124a58u: goto label_124a58;
        case 0x124a5cu: goto label_124a5c;
        case 0x124a60u: goto label_124a60;
        case 0x124a64u: goto label_124a64;
        case 0x124a68u: goto label_124a68;
        case 0x124a6cu: goto label_124a6c;
        default: break;
    }

    ctx->pc = 0x124960u;

label_124960:
    // 0x124960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_124964:
    // 0x124964: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_124968:
    // 0x124968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12496c:
    // 0x12496c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12496cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_124970:
    // 0x124970: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x124970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_124974:
    // 0x124974: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_124978:
    if (ctx->pc == 0x124978u) {
        ctx->pc = 0x124978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124974u;
        // 0x124978: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12497Cu;
        goto label_12497c;
    }
    ctx->pc = 0x124974u;
    {
        const bool branch_taken_0x124974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x124978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124974u;
        // 0x124978: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124974) {
            ctx->pc = 0x1249A8u;
            goto label_1249a8;
        }
    }
    ctx->pc = 0x12497Cu;
label_12497c:
    // 0x12497c: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12497cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
label_124980:
    // 0x124980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124984:
    // 0x124984: 0x8de4bde8  lw          $a0, -0x4218($t7)
    ctx->pc = 0x124984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
label_124988:
    // 0x124988: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x124988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
label_12498c:
    // 0x12498c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12498cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_124990:
    // 0x124990: 0x24a54960  addiu       $a1, $a1, 0x4960
    ctx->pc = 0x124990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18784));
label_124994:
    // 0x124994: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124994u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_124998:
    // 0x124998: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x124998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12499c:
    // 0x12499c: 0x80497b2  j           func_125EC8
label_1249a0:
    if (ctx->pc == 0x1249A0u) {
        ctx->pc = 0x1249A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12499Cu;
        // 0x1249a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1249A4u;
        goto label_1249a4;
    }
    ctx->pc = 0x12499Cu;
    ctx->pc = 0x1249A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12499Cu;
    // 0x1249a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125EC8u;
    sub_00125EC8_0x125ec8(rdram, ctx, runtime); return;
    ctx->pc = 0x1249A4u;
label_1249a4:
    // 0x1249a4: 0x0  nop
    ctx->pc = 0x1249a4u;
    // NOP
label_1249a8:
    // 0x1249a8: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x1249a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_1249ac:
    // 0x1249ac: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
label_1249b0:
    if (ctx->pc == 0x1249B0u) {
        ctx->pc = 0x1249B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249ACu;
        // 0x1249b0: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1249B4u;
        goto label_1249b4;
    }
    ctx->pc = 0x1249ACu;
    {
        const bool branch_taken_0x1249ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1249ac) {
            ctx->pc = 0x1249B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1249ACu;
            // 0x1249b0: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1249C8u;
            goto label_1249c8;
        }
    }
    ctx->pc = 0x1249B4u;
label_1249b4:
    // 0x1249b4: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x1249b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
label_1249b8:
    // 0x1249b8: 0x8deebde8  lw          $t6, -0x4218($t7)
    ctx->pc = 0x1249b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
label_1249bc:
    // 0x1249bc: 0xae2e0054  sw          $t6, 0x54($s1)
    ctx->pc = 0x1249bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 14));
label_1249c0:
    // 0x1249c0: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x1249c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_1249c4:
    // 0x1249c4: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x1249c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1249c8:
    // 0x1249c8: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
label_1249cc:
    if (ctx->pc == 0x1249CCu) {
        ctx->pc = 0x1249CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249C8u;
        // 0x1249cc: 0x8622000c  lh          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1249D0u;
        goto label_1249d0;
    }
    ctx->pc = 0x1249C8u;
    {
        const bool branch_taken_0x1249c8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1249c8) {
            ctx->pc = 0x1249CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1249C8u;
            // 0x1249cc: 0x8622000c  lh          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1249DCu;
            goto label_1249dc;
        }
    }
    ctx->pc = 0x1249D0u;
label_1249d0:
    // 0x1249d0: 0xc049360  jal         func_124D80
label_1249d4:
    if (ctx->pc == 0x1249D4u) {
        ctx->pc = 0x1249D8u;
        goto label_1249d8;
    }
    ctx->pc = 0x1249D0u;
    SET_GPR_U32(ctx, 31, 0x1249D8u);
    ctx->pc = 0x124D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124D80u, 0x1249D0u, 0x1249D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1249D8u;
label_1249d8:
    // 0x1249d8: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x1249d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_1249dc:
    // 0x1249dc: 0x304f0008  andi        $t7, $v0, 0x8
    ctx->pc = 0x1249dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1249e0:
    // 0x1249e0: 0x51e00017  beql        $t7, $zero, . + 4 + (0x17 << 2)
label_1249e4:
    if (ctx->pc == 0x1249E4u) {
        ctx->pc = 0x1249E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249E0u;
        // 0x1249e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1249E8u;
        goto label_1249e8;
    }
    ctx->pc = 0x1249E0u;
    {
        const bool branch_taken_0x1249e0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1249e0) {
            ctx->pc = 0x1249E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1249E0u;
            // 0x1249e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124A40u;
            goto label_124a40;
        }
    }
    ctx->pc = 0x1249E8u;
label_1249e8:
    // 0x1249e8: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x1249e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1249ec:
    // 0x1249ec: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_1249f0:
    if (ctx->pc == 0x1249F0u) {
        ctx->pc = 0x1249F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249ECu;
        // 0x1249f0: 0x304e0003  andi        $t6, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1249F4u;
        goto label_1249f4;
    }
    ctx->pc = 0x1249ECu;
    {
        const bool branch_taken_0x1249ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1249F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249ECu;
        // 0x1249f0: 0x304e0003  andi        $t6, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249ec) {
            ctx->pc = 0x124A3Cu;
            goto label_124a3c;
        }
    }
    ctx->pc = 0x1249F4u;
label_1249f4:
    // 0x1249f4: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x1249f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1249f8:
    // 0x1249f8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1249f8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1249fc:
    // 0x1249fc: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1249fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_124a00:
    // 0x124a00: 0x15c00002  bnez        $t6, . + 4 + (0x2 << 2)
label_124a04:
    if (ctx->pc == 0x124A04u) {
        ctx->pc = 0x124A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A00u;
        // 0x124a04: 0x1f28023  subu        $s0, $t7, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A08u;
        goto label_124a08;
    }
    ctx->pc = 0x124A00u;
    {
        const bool branch_taken_0x124a00 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x124A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A00u;
        // 0x124a04: 0x1f28023  subu        $s0, $t7, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a00) {
            ctx->pc = 0x124A0Cu;
            goto label_124a0c;
        }
    }
    ctx->pc = 0x124A08u;
label_124a08:
    // 0x124a08: 0x8e2d0014  lw          $t5, 0x14($s1)
    ctx->pc = 0x124a08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_124a0c:
    // 0x124a0c: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
label_124a10:
    if (ctx->pc == 0x124A10u) {
        ctx->pc = 0x124A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A0Cu;
        // 0x124a10: 0xae2d0008  sw          $t5, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A14u;
        goto label_124a14;
    }
    ctx->pc = 0x124A0Cu;
    {
        const bool branch_taken_0x124a0c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x124A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A0Cu;
        // 0x124a10: 0xae2d0008  sw          $t5, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a0c) {
            ctx->pc = 0x124A3Cu;
            goto label_124a3c;
        }
    }
    ctx->pc = 0x124A14u;
label_124a14:
    // 0x124a14: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x124a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_124a18:
    // 0x124a18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x124a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_124a1c:
    // 0x124a1c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x124a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_124a20:
    // 0x124a20: 0x40f809  jalr        $v0
label_124a24:
    if (ctx->pc == 0x124A24u) {
        ctx->pc = 0x124A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A20u;
        // 0x124a24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A28u;
        goto label_124a28;
    }
    ctx->pc = 0x124A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124A28u);
        ctx->pc = 0x124A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A20u;
        // 0x124a24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124A20u, 0x124A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124A28u;
label_124a28:
    // 0x124a28: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x124a28u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_124a2c:
    // 0x124a2c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_124a30:
    if (ctx->pc == 0x124A30u) {
        ctx->pc = 0x124A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A2Cu;
        // 0x124a30: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A34u;
        goto label_124a34;
    }
    ctx->pc = 0x124A2Cu;
    {
        const bool branch_taken_0x124a2c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x124A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A2Cu;
        // 0x124a30: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a2c) {
            ctx->pc = 0x124A58u;
            goto label_124a58;
        }
    }
    ctx->pc = 0x124A34u;
label_124a34:
    // 0x124a34: 0x5e00fff8  bgtzl       $s0, . + 4 + (-0x8 << 2)
label_124a38:
    if (ctx->pc == 0x124A38u) {
        ctx->pc = 0x124A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A34u;
        // 0x124a38: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A3Cu;
        goto label_124a3c;
    }
    ctx->pc = 0x124A34u;
    {
        const bool branch_taken_0x124a34 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x124a34) {
            ctx->pc = 0x124A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124A34u;
            // 0x124a38: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124A18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124a18;
        }
    }
    ctx->pc = 0x124A3Cu;
label_124a3c:
    // 0x124a3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x124a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124a40:
    // 0x124a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124a44:
    // 0x124a44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124a44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_124a48:
    // 0x124a48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_124a4c:
    // 0x124a4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x124a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_124a50:
    // 0x124a50: 0x3e00008  jr          $ra
label_124a54:
    if (ctx->pc == 0x124A54u) {
        ctx->pc = 0x124A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A50u;
        // 0x124a54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A58u;
        goto label_124a58;
    }
    ctx->pc = 0x124A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A50u;
        // 0x124a54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124A58u;
label_124a58:
    // 0x124a58: 0x962f000c  lhu         $t7, 0xC($s1)
    ctx->pc = 0x124a58u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_124a5c:
    // 0x124a5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124a60:
    // 0x124a60: 0x35ef0040  ori         $t7, $t7, 0x40
    ctx->pc = 0x124a60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)64);
label_124a64:
    // 0x124a64: 0x1000fff6  b           . + 4 + (-0xA << 2)
label_124a68:
    if (ctx->pc == 0x124A68u) {
        ctx->pc = 0x124A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A64u;
        // 0x124a68: 0xa62f000c  sh          $t7, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124A6Cu;
        goto label_124a6c;
    }
    ctx->pc = 0x124A64u;
    {
        const bool branch_taken_0x124a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A64u;
        // 0x124a68: 0xa62f000c  sh          $t7, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a64) {
            ctx->pc = 0x124A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124a40;
        }
    }
    ctx->pc = 0x124A6Cu;
label_124a6c:
    // 0x124a6c: 0x0  nop
    ctx->pc = 0x124a6cu;
    // NOP
    if (ctx->pc == 0x124a6cu) { ctx->pc = 0x124a70u; }
}
