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

// Function: sub_00287970
// Address: 0x287970 - 0x287ba0
void sub_00287970_0x287970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287970_0x287970");
#endif

    switch (ctx->pc) {
        case 0x2879c4u: goto label_2879c4;
        case 0x2879c8u: goto label_2879c8;
        case 0x287a18u: goto label_287a18;
        case 0x287a48u: goto label_287a48;
        case 0x287aa0u: goto label_287aa0;
        case 0x287ad8u: goto label_287ad8;
        case 0x287ae8u: goto label_287ae8;
        case 0x287afcu: goto label_287afc;
        case 0x287b08u: goto label_287b08;
        case 0x287b30u: goto label_287b30;
        case 0x287b44u: goto label_287b44;
        case 0x287b50u: goto label_287b50;
        case 0x287b64u: goto label_287b64;
        default: break;
    }

    ctx->pc = 0x287970u;

    // 0x287970: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x287970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x287974: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x287974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x287978: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x287978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x28797c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x28797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x287980: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x287980u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287984: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x287984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x287988: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x287988u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28798c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x28798cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x287990: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x287990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x287994: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x287994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287998: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x287998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x28799c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28799cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2879a0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2879a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2879a4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2879a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2879a8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2879a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2879ac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2879acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2879b0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2879b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2879b4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2879b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2879b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2879b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2879bc: 0xe2a021  addu        $s4, $a3, $v0
    ctx->pc = 0x2879bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2879c0: 0xc0a1b1c  jal         func_286C70
label_2879c4:
    if (ctx->pc == 0x2879C4u) {
        ctx->pc = 0x2879C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879C0u;
        // 0x2879c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2879C8u;
        goto label_2879c8;
    }
    ctx->pc = 0x2879C0u;
    SET_GPR_U32(ctx, 31, 0x2879C8u);
    ctx->pc = 0x2879C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2879C0u;
    // 0x2879c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286C70u, 0x2879C0u, 0x2879C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2879C8u;
label_2879c8:
    // 0x2879c8: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2879C8u;
    {
        const bool branch_taken_0x2879c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2879CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879C8u;
        // 0x2879cc: 0x27c20020  addiu       $v0, $fp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879c8) {
            ctx->pc = 0x287B68u;
            goto label_287b68;
        }
    }
    ctx->pc = 0x2879D0u;
    // 0x2879d0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2879d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2879d4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x2879d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2879d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2879d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2879dc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2879dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2879e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2879E0u;
    {
        const bool branch_taken_0x2879e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2879E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879E0u;
        // 0x2879e4: 0x8c750004  lw          $s5, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879e0) {
            ctx->pc = 0x2879F0u;
            goto label_2879f0;
        }
    }
    ctx->pc = 0x2879E8u;
    // 0x2879e8: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2879E8u;
    {
        const bool branch_taken_0x2879e8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2879ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879E8u;
        // 0x2879ec: 0x2a21821  addu        $v1, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879e8) {
            ctx->pc = 0x2879FCu;
            goto label_2879fc;
        }
    }
    ctx->pc = 0x2879F0u;
label_2879f0:
    // 0x2879f0: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2879f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x2879f4: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2879F4u;
    {
        const bool branch_taken_0x2879f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2879F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879F4u;
        // 0x2879f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879f4) {
            ctx->pc = 0x287B6Cu;
            goto label_287b6c;
        }
    }
    ctx->pc = 0x2879FCu;
label_2879fc:
    // 0x2879fc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2879fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x287a00: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x287a00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x287a04: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x287a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x287a08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x287A08u;
    {
        const bool branch_taken_0x287a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A08u;
        // 0x287a0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a08) {
            ctx->pc = 0x287A28u;
            goto label_287a28;
        }
    }
    ctx->pc = 0x287A10u;
    // 0x287a10: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x287A10u;
    SET_GPR_U32(ctx, 31, 0x287A18u);
    ctx->pc = 0x287A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A10u;
    // 0x287a14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x287A10u, 0x287A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A18u;
label_287a18:
    // 0x287a18: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x287A18u;
    {
        const bool branch_taken_0x287a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287a18) {
            ctx->pc = 0x287A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287A18u;
            // 0x287a1c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287A34u;
            goto label_287a34;
        }
    }
    ctx->pc = 0x287A20u;
    // 0x287a20: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x287A20u;
    {
        const bool branch_taken_0x287a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A20u;
        // 0x287a24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a20) {
            ctx->pc = 0x287B6Cu;
            goto label_287b6c;
        }
    }
    ctx->pc = 0x287A28u;
label_287a28:
    // 0x287a28: 0x12800050  beqz        $s4, . + 4 + (0x50 << 2)
    ctx->pc = 0x287A28u;
    {
        const bool branch_taken_0x287a28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A28u;
        // 0x287a2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a28) {
            ctx->pc = 0x287B6Cu;
            goto label_287b6c;
        }
    }
    ctx->pc = 0x287A30u;
    // 0x287a30: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x287a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_287a34:
    // 0x287a34: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x287a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x287a38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x287A38u;
    {
        const bool branch_taken_0x287a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A38u;
        // 0x287a3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a38) {
            ctx->pc = 0x287A58u;
            goto label_287a58;
        }
    }
    ctx->pc = 0x287A40u;
    // 0x287a40: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x287A40u;
    SET_GPR_U32(ctx, 31, 0x287A48u);
    ctx->pc = 0x287A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A40u;
    // 0x287a44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x287A40u, 0x287A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A48u;
label_287a48:
    // 0x287a48: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x287A48u;
    {
        const bool branch_taken_0x287a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287a48) {
            ctx->pc = 0x287A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287A48u;
            // 0x287a4c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287A64u;
            goto label_287a64;
        }
    }
    ctx->pc = 0x287A50u;
    // 0x287a50: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x287A50u;
    {
        const bool branch_taken_0x287a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A50u;
        // 0x287a54: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a50) {
            ctx->pc = 0x287B6Cu;
            goto label_287b6c;
        }
    }
    ctx->pc = 0x287A58u;
label_287a58:
    // 0x287a58: 0x12c00044  beqz        $s6, . + 4 + (0x44 << 2)
    ctx->pc = 0x287A58u;
    {
        const bool branch_taken_0x287a58 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A58u;
        // 0x287a5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a58) {
            ctx->pc = 0x287B6Cu;
            goto label_287b6c;
        }
    }
    ctx->pc = 0x287A60u;
    // 0x287a60: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x287a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_287a64:
    // 0x287a64: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x287a64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x287a68: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x287a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x287a6c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x287a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x287a70: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x287a70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x287a74: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x287a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x287a78: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x287a78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x287a7c: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x287a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x287a80: 0x2249021  addu        $s2, $s1, $a0
    ctx->pc = 0x287a80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x287a84: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x287a84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a88: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x287a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x287a8c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x287a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x287a90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x287A90u;
    {
        const bool branch_taken_0x287a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A90u;
        // 0x287a94: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a90) {
            ctx->pc = 0x287AC0u;
            goto label_287ac0;
        }
    }
    ctx->pc = 0x287A98u;
    // 0x287a98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x287A98u;
    {
        const bool branch_taken_0x287a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A98u;
        // 0x287a9c: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a98) {
            ctx->pc = 0x287AA8u;
            goto label_287aa8;
        }
    }
    ctx->pc = 0x287AA0u;
label_287aa0:
    // 0x287aa0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x287aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x287aa4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x287aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_287aa8:
    // 0x287aa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x287aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x287aac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x287aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x287ab0: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x287ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x287ab4: 0x213182a  slt         $v1, $s0, $s3
    ctx->pc = 0x287ab4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x287ab8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x287AB8u;
    {
        const bool branch_taken_0x287ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x287ab8) {
            ctx->pc = 0x287AA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287aa0;
        }
    }
    ctx->pc = 0x287AC0u;
label_287ac0:
    // 0x287ac0: 0xae930004  sw          $s3, 0x4($s4)
    ctx->pc = 0x287ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 19));
    // 0x287ac4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x287ac4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ac8: 0x1aa00016  blez        $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x287AC8u;
    {
        const bool branch_taken_0x287ac8 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x287ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287AC8u;
        // 0x287acc: 0xdfd70048  ld          $s7, 0x48($fp) (Delay Slot)
        SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 30), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ac8) {
            ctx->pc = 0x287B24u;
            goto label_287b24;
        }
    }
    ctx->pc = 0x287AD0u;
    // 0x287ad0: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x287ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ad4: 0x0  nop
    ctx->pc = 0x287ad4u;
    // NOP
label_287ad8:
    // 0x287ad8: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x287ad8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x287adc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x287adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ae0: 0xc048082  jal         func_120208
    ctx->pc = 0x287AE0u;
    SET_GPR_U32(ctx, 31, 0x287AE8u);
    ctx->pc = 0x287AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287AE0u;
    // 0x287ae4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x287AE0u, 0x287AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AE8u;
label_287ae8:
    // 0x287ae8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x287ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x287aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x287aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287af0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x287af0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287af4: 0xc0a2202  jal         func_288808
    ctx->pc = 0x287AF4u;
    SET_GPR_U32(ctx, 31, 0x287AFCu);
    ctx->pc = 0x287AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287AF4u;
    // 0x287af8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288808u, 0x287AF4u, 0x287AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AFCu;
label_287afc:
    // 0x287afc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x287afcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x287b00: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x287b00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x287b04: 0x53102d  daddu       $v0, $v0, $s3
    ctx->pc = 0x287b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 19));
label_287b08:
    // 0x287b08: 0x53982b  sltu        $s3, $v0, $s3
    ctx->pc = 0x287b08u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x287b0c: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x287b0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x287b10: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x287b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x287b14: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x287b14u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x287b18: 0x262982d  daddu       $s3, $s3, $v0
    ctx->pc = 0x287b18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 2));
    // 0x287b1c: 0x1600ffee  bnez        $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x287B1Cu;
    {
        const bool branch_taken_0x287b1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x287B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B1Cu;
        // 0x287b20: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b1c) {
            ctx->pc = 0x287AD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287ad8;
        }
    }
    ctx->pc = 0x287B24u;
label_287b24:
    // 0x287b24: 0xfe530000  sd          $s3, 0x0($s2)
    ctx->pc = 0x287b24u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 19));
    // 0x287b28: 0xc0a1a72  jal         func_2869C8
    ctx->pc = 0x287B28u;
    SET_GPR_U32(ctx, 31, 0x287B30u);
    ctx->pc = 0x287B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B28u;
    // 0x287b2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2869C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2869C8u, 0x287B28u, 0x287B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B30u;
label_287b30:
    // 0x287b30: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x287b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x287b34: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x287b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287b38: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x287b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287b3c: 0xc0a1fb8  jal         func_287EE0
    ctx->pc = 0x287B3Cu;
    SET_GPR_U32(ctx, 31, 0x287B44u);
    ctx->pc = 0x287B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B3Cu;
    // 0x287b40: 0x63180  sll         $a2, $a2, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287EE0u, 0x287B3Cu, 0x287B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B44u;
label_287b44:
    // 0x287b44: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x287b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287b48: 0xc0a1c04  jal         func_287010
    ctx->pc = 0x287B48u;
    SET_GPR_U32(ctx, 31, 0x287B50u);
    ctx->pc = 0x287B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B48u;
    // 0x287b4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287010u, 0x287B48u, 0x287B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B50u;
label_287b50:
    // 0x287b50: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287B50u;
    {
        const bool branch_taken_0x287b50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x287B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B50u;
        // 0x287b54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b50) {
            ctx->pc = 0x287B64u;
            goto label_287b64;
        }
    }
    ctx->pc = 0x287B58u;
    // 0x287b58: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x287b58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x287b5c: 0xc0a168c  jal         func_285A30
    ctx->pc = 0x287B5Cu;
    SET_GPR_U32(ctx, 31, 0x287B64u);
    ctx->pc = 0x287B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B5Cu;
    // 0x287b60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285A30u, 0x287B5Cu, 0x287B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B64u;
label_287b64:
    // 0x287b64: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x287b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_287b68:
    // 0x287b68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x287b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_287b6c:
    // 0x287b6c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x287b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x287b70: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x287b70u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x287b74: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x287b74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x287b78: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x287b78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x287b7c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x287b7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x287b80: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x287b80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x287b84: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x287b84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x287b88: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x287b88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287b8c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x287b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287b90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x287b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287b94: 0x3e00008  jr          $ra
    ctx->pc = 0x287B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B94u;
        // 0x287b98: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287B9Cu;
    // 0x287b9c: 0x0  nop
    ctx->pc = 0x287b9cu;
    // NOP
    if (ctx->pc == 0x287b9cu) { ctx->pc = 0x287ba0u; }
}
