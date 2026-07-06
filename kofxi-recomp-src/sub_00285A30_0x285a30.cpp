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

// Function: sub_00285A30
// Address: 0x285a30 - 0x285be8
void sub_00285A30_0x285a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285A30_0x285a30");
#endif

    switch (ctx->pc) {
        case 0x285a80u: goto label_285a80;
        case 0x285ab8u: goto label_285ab8;
        case 0x285b10u: goto label_285b10;
        case 0x285b50u: goto label_285b50;
        case 0x285bc4u: goto label_285bc4;
        default: break;
    }

    ctx->pc = 0x285a30u;

    // 0x285a30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x285a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x285a34: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x285a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x285a38: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x285a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x285a3c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x285a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x285a40: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x285a40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x285a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x285a48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x285a48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a4c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x285a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x285a50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x285a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x285a54: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x285a54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x285a58: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x285a58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x285a5c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x285a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x285a60: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x285A60u;
    {
        const bool branch_taken_0x285a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A60u;
        // 0x285a64: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a60) {
            ctx->pc = 0x285A98u;
            goto label_285a98;
        }
    }
    ctx->pc = 0x285A68u;
    // 0x285a68: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x285a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x285a6c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x285a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x285a70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x285A70u;
    {
        const bool branch_taken_0x285a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A70u;
        // 0x285a74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a70) {
            ctx->pc = 0x285A90u;
            goto label_285a90;
        }
    }
    ctx->pc = 0x285A78u;
    // 0x285a78: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x285A78u;
    SET_GPR_U32(ctx, 31, 0x285A80u);
    ctx->pc = 0x285A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285A78u;
    // 0x285a7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x285A78u, 0x285A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A80u;
label_285a80:
    // 0x285a80: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x285A80u;
    {
        const bool branch_taken_0x285a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285a80) {
            ctx->pc = 0x285A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285A80u;
            // 0x285a84: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285AA0u;
            goto label_285aa0;
        }
    }
    ctx->pc = 0x285A88u;
    // 0x285a88: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x285A88u;
    {
        const bool branch_taken_0x285a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A88u;
        // 0x285a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a88) {
            ctx->pc = 0x285BC8u;
            goto label_285bc8;
        }
    }
    ctx->pc = 0x285A90u;
label_285a90:
    // 0x285a90: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x285A90u;
    {
        const bool branch_taken_0x285a90 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x285a90) {
            ctx->pc = 0x285A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285A90u;
            // 0x285a94: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285AA0u;
            goto label_285aa0;
        }
    }
    ctx->pc = 0x285A98u;
label_285a98:
    // 0x285a98: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x285A98u;
    {
        const bool branch_taken_0x285a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A98u;
        // 0x285a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a98) {
            ctx->pc = 0x285BC8u;
            goto label_285bc8;
        }
    }
    ctx->pc = 0x285AA0u;
label_285aa0:
    // 0x285aa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x285aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285aa4: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x285aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x285aa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x285aa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285aac: 0x1a200015  blez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x285AACu;
    {
        const bool branch_taken_0x285aac = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x285AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AACu;
        // 0x285ab0: 0x8e890000  lw          $t1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285aac) {
            ctx->pc = 0x285B04u;
            goto label_285b04;
        }
    }
    ctx->pc = 0x285AB4u;
    // 0x285ab4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x285ab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285ab8:
    // 0x285ab8: 0xdca70000  ld          $a3, 0x0($a1)
    ctx->pc = 0x285ab8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x285abc: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x285abcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x285ac0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x285ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x285ac4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x285AC4u;
    {
        const bool branch_taken_0x285ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AC4u;
        // 0x285ac8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ac4) {
            ctx->pc = 0x285AE0u;
            goto label_285ae0;
        }
    }
    ctx->pc = 0x285ACCu;
    // 0x285acc: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x285accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x285ad0: 0xe4182f  dsubu       $v1, $a3, $a0
    ctx->pc = 0x285ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) - GPR_U64(ctx, 4));
    // 0x285ad4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x285ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x285ad8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x285AD8u;
    {
        const bool branch_taken_0x285ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AD8u;
        // 0x285adc: 0x6467ffff  daddiu      $a3, $v1, -0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967295);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ad8) {
            ctx->pc = 0x285AF0u;
            goto label_285af0;
        }
    }
    ctx->pc = 0x285AE0u;
label_285ae0:
    // 0x285ae0: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x285ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x285ae4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x285ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x285ae8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x285ae8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x285aec: 0xe4382f  dsubu       $a3, $a3, $a0
    ctx->pc = 0x285aecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) - GPR_U64(ctx, 4));
label_285af0:
    // 0x285af0: 0xfd270000  sd          $a3, 0x0($t1)
    ctx->pc = 0x285af0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 7));
    // 0x285af4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x285af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x285af8: 0x1500ffef  bnez        $t0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x285AF8u;
    {
        const bool branch_taken_0x285af8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x285AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AF8u;
        // 0x285afc: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285af8) {
            ctx->pc = 0x285AB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285ab8;
        }
    }
    ctx->pc = 0x285B00u;
    // 0x285b00: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x285b00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285b04:
    // 0x285b04: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x285B04u;
    {
        const bool branch_taken_0x285b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285b04) {
            ctx->pc = 0x285B3Cu;
            goto label_285b3c;
        }
    }
    ctx->pc = 0x285B0Cu;
    // 0x285b0c: 0x0  nop
    ctx->pc = 0x285b0cu;
    // NOP
label_285b10:
    // 0x285b10: 0x110102a  slt         $v0, $t0, $s0
    ctx->pc = 0x285b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x285b14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x285B14u;
    {
        const bool branch_taken_0x285b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285b14) {
            ctx->pc = 0x285B3Cu;
            goto label_285b3c;
        }
    }
    ctx->pc = 0x285B1Cu;
    // 0x285b1c: 0xdca70000  ld          $a3, 0x0($a1)
    ctx->pc = 0x285b1cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x285b20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x285b20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x285b24: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x285b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x285b28: 0x64e4ffff  daddiu      $a0, $a3, -0x1
    ctx->pc = 0x285b28u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4294967295);
    // 0x285b2c: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x285b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x285b30: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x285b30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x285b34: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x285B34u;
    {
        const bool branch_taken_0x285b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B34u;
        // 0x285b38: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b34) {
            ctx->pc = 0x285B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285b10;
        }
    }
    ctx->pc = 0x285B3Cu;
label_285b3c:
    // 0x285b3c: 0x1125001e  beq         $t1, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x285B3Cu;
    {
        const bool branch_taken_0x285b3c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x285B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B3Cu;
        // 0x285b40: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b3c) {
            ctx->pc = 0x285BB8u;
            goto label_285bb8;
        }
    }
    ctx->pc = 0x285B44u;
    // 0x285b44: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x285b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x285b48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x285B48u;
    {
        const bool branch_taken_0x285b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B48u;
        // 0x285b4c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b48) {
            ctx->pc = 0x285B6Cu;
            goto label_285b6c;
        }
    }
    ctx->pc = 0x285B50u;
label_285b50:
    // 0x285b50: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x285b50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x285b54: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x285b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285b58: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x285b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x285b5c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x285b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x285b60: 0xfd230018  sd          $v1, 0x18($t1)
    ctx->pc = 0x285b60u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 24), GPR_U64(ctx, 3));
    // 0x285b64: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x285b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x285b68: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x285b68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_285b6c:
    // 0x285b6c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x285B6Cu;
    {
        const bool branch_taken_0x285b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B6Cu;
        // 0x285b70: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b6c) {
            ctx->pc = 0x285BB8u;
            goto label_285bb8;
        }
    }
    ctx->pc = 0x285B74u;
    // 0x285b74: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x285b74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x285b78: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x285b78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x285b7c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x285b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x285b80: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x285B80u;
    {
        const bool branch_taken_0x285b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B80u;
        // 0x285b84: 0xfd230000  sd          $v1, 0x0($t1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b80) {
            ctx->pc = 0x285BB8u;
            goto label_285bb8;
        }
    }
    ctx->pc = 0x285B88u;
    // 0x285b88: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x285b88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x285b8c: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x285b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285b90: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x285b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x285b94: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x285b94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x285b98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x285B98u;
    {
        const bool branch_taken_0x285b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B98u;
        // 0x285b9c: 0xfd230008  sd          $v1, 0x8($t1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b98) {
            ctx->pc = 0x285BB8u;
            goto label_285bb8;
        }
    }
    ctx->pc = 0x285BA0u;
    // 0x285ba0: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x285ba0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x285ba4: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x285ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ba8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x285ba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x285bac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x285bacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x285bb0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x285BB0u;
    {
        const bool branch_taken_0x285bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BB0u;
        // 0x285bb4: 0xfd230010  sd          $v1, 0x10($t1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 9), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285bb0) {
            ctx->pc = 0x285B50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285b50;
        }
    }
    ctx->pc = 0x285BB8u;
label_285bb8:
    // 0x285bb8: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x285bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x285bbc: 0xc0a1a72  jal         func_2869C8
    ctx->pc = 0x285BBCu;
    SET_GPR_U32(ctx, 31, 0x285BC4u);
    ctx->pc = 0x285BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285BBCu;
    // 0x285bc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2869C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2869C8u, 0x285BBCu, 0x285BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BC4u;
label_285bc4:
    // 0x285bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285bc8:
    // 0x285bc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x285bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285bcc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x285bccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285bd0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x285bd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285bd4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x285bd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285bd8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x285bd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x285bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285be0: 0x3e00008  jr          $ra
    ctx->pc = 0x285BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BE0u;
        // 0x285be4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285BE8u;
}
