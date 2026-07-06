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

// Function: sub_00298CB0
// Address: 0x298cb0 - 0x298db8
void sub_00298CB0_0x298cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298CB0_0x298cb0");
#endif

    switch (ctx->pc) {
        case 0x298cb0u: goto label_298cb0;
        case 0x298cb4u: goto label_298cb4;
        case 0x298cb8u: goto label_298cb8;
        case 0x298cbcu: goto label_298cbc;
        case 0x298cc0u: goto label_298cc0;
        case 0x298cc4u: goto label_298cc4;
        case 0x298cc8u: goto label_298cc8;
        case 0x298cccu: goto label_298ccc;
        case 0x298cd0u: goto label_298cd0;
        case 0x298cd4u: goto label_298cd4;
        case 0x298cd8u: goto label_298cd8;
        case 0x298cdcu: goto label_298cdc;
        case 0x298ce0u: goto label_298ce0;
        case 0x298ce4u: goto label_298ce4;
        case 0x298ce8u: goto label_298ce8;
        case 0x298cecu: goto label_298cec;
        case 0x298cf0u: goto label_298cf0;
        case 0x298cf4u: goto label_298cf4;
        case 0x298cf8u: goto label_298cf8;
        case 0x298cfcu: goto label_298cfc;
        case 0x298d00u: goto label_298d00;
        case 0x298d04u: goto label_298d04;
        case 0x298d08u: goto label_298d08;
        case 0x298d0cu: goto label_298d0c;
        case 0x298d10u: goto label_298d10;
        case 0x298d14u: goto label_298d14;
        case 0x298d18u: goto label_298d18;
        case 0x298d1cu: goto label_298d1c;
        case 0x298d20u: goto label_298d20;
        case 0x298d24u: goto label_298d24;
        case 0x298d28u: goto label_298d28;
        case 0x298d2cu: goto label_298d2c;
        case 0x298d30u: goto label_298d30;
        case 0x298d34u: goto label_298d34;
        case 0x298d38u: goto label_298d38;
        case 0x298d3cu: goto label_298d3c;
        case 0x298d40u: goto label_298d40;
        case 0x298d44u: goto label_298d44;
        case 0x298d48u: goto label_298d48;
        case 0x298d4cu: goto label_298d4c;
        case 0x298d50u: goto label_298d50;
        case 0x298d54u: goto label_298d54;
        case 0x298d58u: goto label_298d58;
        case 0x298d5cu: goto label_298d5c;
        case 0x298d60u: goto label_298d60;
        case 0x298d64u: goto label_298d64;
        case 0x298d68u: goto label_298d68;
        case 0x298d6cu: goto label_298d6c;
        case 0x298d70u: goto label_298d70;
        case 0x298d74u: goto label_298d74;
        case 0x298d78u: goto label_298d78;
        case 0x298d7cu: goto label_298d7c;
        case 0x298d80u: goto label_298d80;
        case 0x298d84u: goto label_298d84;
        case 0x298d88u: goto label_298d88;
        case 0x298d8cu: goto label_298d8c;
        case 0x298d90u: goto label_298d90;
        case 0x298d94u: goto label_298d94;
        case 0x298d98u: goto label_298d98;
        case 0x298d9cu: goto label_298d9c;
        case 0x298da0u: goto label_298da0;
        case 0x298da4u: goto label_298da4;
        case 0x298da8u: goto label_298da8;
        case 0x298dacu: goto label_298dac;
        case 0x298db0u: goto label_298db0;
        case 0x298db4u: goto label_298db4;
        default: break;
    }

    ctx->pc = 0x298cb0u;

label_298cb0:
    // 0x298cb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x298cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_298cb4:
    // 0x298cb4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x298cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_298cb8:
    // 0x298cb8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x298cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_298cbc:
    // 0x298cbc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x298cbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_298cc0:
    // 0x298cc0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x298cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_298cc4:
    // 0x298cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_298cc8:
    // 0x298cc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x298cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_298ccc:
    // 0x298ccc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x298cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_298cd0:
    // 0x298cd0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x298cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_298cd4:
    // 0x298cd4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x298cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_298cd8:
    // 0x298cd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x298cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_298cdc:
    // 0x298cdc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x298cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_298ce0:
    // 0x298ce0: 0x40f809  jalr        $v0
label_298ce4:
    if (ctx->pc == 0x298CE4u) {
        ctx->pc = 0x298CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CE0u;
        // 0x298ce4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CE8u;
        goto label_298ce8;
    }
    ctx->pc = 0x298CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x298CE8u);
        ctx->pc = 0x298CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CE0u;
        // 0x298ce4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298CE0u, 0x298CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298CE8u;
label_298ce8:
    // 0x298ce8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x298ce8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_298cec:
    // 0x298cec: 0xde220058  ld          $v0, 0x58($s1)
    ctx->pc = 0x298cecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 88)));
label_298cf0:
    // 0x298cf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_298cf4:
    // 0x298cf4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x298cf4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_298cf8:
    // 0x298cf8: 0xfe220058  sd          $v0, 0x58($s1)
    ctx->pc = 0x298cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 2));
label_298cfc:
    // 0x298cfc: 0xfe130000  sd          $s3, 0x0($s0)
    ctx->pc = 0x298cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 19));
label_298d00:
    // 0x298d00: 0xc04872c  jal         func_121CB0
label_298d04:
    if (ctx->pc == 0x298D04u) {
        ctx->pc = 0x298D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D00u;
        // 0x298d04: 0x9e250018  lwu         $a1, 0x18($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D08u;
        goto label_298d08;
    }
    ctx->pc = 0x298D00u;
    SET_GPR_U32(ctx, 31, 0x298D08u);
    ctx->pc = 0x298D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D00u;
    // 0x298d04: 0x9e250018  lwu         $a1, 0x18($s1) (Delay Slot)
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x298D00u, 0x298D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D08u;
label_298d08:
    // 0x298d08: 0x9e230014  lwu         $v1, 0x14($s1)
    ctx->pc = 0x298d08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_298d0c:
    // 0x298d0c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x298d0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_298d10:
    // 0x298d10: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_298d14:
    if (ctx->pc == 0x298D14u) {
        ctx->pc = 0x298D18u;
        goto label_298d18;
    }
    ctx->pc = 0x298D10u;
    {
        const bool branch_taken_0x298d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298d10) {
            ctx->pc = 0x298D24u;
            goto label_298d24;
        }
    }
    ctx->pc = 0x298D18u;
label_298d18:
    // 0x298d18: 0x9e250010  lwu         $a1, 0x10($s1)
    ctx->pc = 0x298d18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_298d1c:
    // 0x298d1c: 0xc04872c  jal         func_121CB0
label_298d20:
    if (ctx->pc == 0x298D20u) {
        ctx->pc = 0x298D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D1Cu;
        // 0x298d20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D24u;
        goto label_298d24;
    }
    ctx->pc = 0x298D1Cu;
    SET_GPR_U32(ctx, 31, 0x298D24u);
    ctx->pc = 0x298D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D1Cu;
    // 0x298d20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x298D1Cu, 0x298D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D24u;
label_298d24:
    // 0x298d24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x298d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_298d28:
    // 0x298d28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x298d28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_298d2c:
    // 0x298d2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x298d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_298d30:
    // 0x298d30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x298d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_298d34:
    // 0x298d34: 0x8e350004  lw          $s5, 0x4($s1)
    ctx->pc = 0x298d34u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_298d38:
    // 0x298d38: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x298d38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_298d3c:
    // 0x298d3c: 0x10000003  b           . + 4 + (0x3 << 2)
label_298d40:
    if (ctx->pc == 0x298D40u) {
        ctx->pc = 0x298D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D3Cu;
        // 0x298d40: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D44u;
        goto label_298d44;
    }
    ctx->pc = 0x298D3Cu;
    {
        const bool branch_taken_0x298d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D3Cu;
        // 0x298d40: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d3c) {
            ctx->pc = 0x298D4Cu;
            goto label_298d4c;
        }
    }
    ctx->pc = 0x298D44u;
label_298d44:
    // 0x298d44: 0x0  nop
    ctx->pc = 0x298d44u;
    // NOP
label_298d48:
    // 0x298d48: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x298d48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_298d4c:
    // 0x298d4c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_298d50:
    if (ctx->pc == 0x298D50u) {
        ctx->pc = 0x298D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D4Cu;
        // 0x298d50: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D54u;
        goto label_298d54;
    }
    ctx->pc = 0x298D4Cu;
    {
        const bool branch_taken_0x298d4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x298D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D4Cu;
        // 0x298d50: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d4c) {
            ctx->pc = 0x298D90u;
            goto label_298d90;
        }
    }
    ctx->pc = 0x298D54u;
label_298d54:
    // 0x298d54: 0xde220098  ld          $v0, 0x98($s1)
    ctx->pc = 0x298d54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 152)));
label_298d58:
    // 0x298d58: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x298d58u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_298d5c:
    // 0x298d5c: 0xfe220098  sd          $v0, 0x98($s1)
    ctx->pc = 0x298d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 152), GPR_U64(ctx, 2));
label_298d60:
    // 0x298d60: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x298d60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_298d64:
    // 0x298d64: 0x5473fff8  bnel        $v1, $s3, . + 4 + (-0x8 << 2)
label_298d68:
    if (ctx->pc == 0x298D68u) {
        ctx->pc = 0x298D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D64u;
        // 0x298d68: 0x26120004  addiu       $s2, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D6Cu;
        goto label_298d6c;
    }
    ctx->pc = 0x298D64u;
    {
        const bool branch_taken_0x298d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x298d64) {
            ctx->pc = 0x298D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298D64u;
            // 0x298d68: 0x26120004  addiu       $s2, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298D48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298d48;
        }
    }
    ctx->pc = 0x298D6Cu;
label_298d6c:
    // 0x298d6c: 0xde220060  ld          $v0, 0x60($s1)
    ctx->pc = 0x298d6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 96)));
label_298d70:
    // 0x298d70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x298d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_298d74:
    // 0x298d74: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x298d74u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_298d78:
    // 0x298d78: 0xfe220060  sd          $v0, 0x60($s1)
    ctx->pc = 0x298d78u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 2));
label_298d7c:
    // 0x298d7c: 0x2a0f809  jalr        $s5
label_298d80:
    if (ctx->pc == 0x298D80u) {
        ctx->pc = 0x298D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D7Cu;
        // 0x298d80: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D84u;
        goto label_298d84;
    }
    ctx->pc = 0x298D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x298D84u);
        ctx->pc = 0x298D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D7Cu;
        // 0x298d80: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298D7Cu, 0x298D84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298D84u;
label_298d84:
    // 0x298d84: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
label_298d88:
    if (ctx->pc == 0x298D88u) {
        ctx->pc = 0x298D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D84u;
        // 0x298d88: 0x26120004  addiu       $s2, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D8Cu;
        goto label_298d8c;
    }
    ctx->pc = 0x298D84u;
    {
        const bool branch_taken_0x298d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298d84) {
            ctx->pc = 0x298D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298D84u;
            // 0x298d88: 0x26120004  addiu       $s2, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298D48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298d48;
        }
    }
    ctx->pc = 0x298D8Cu;
label_298d8c:
    // 0x298d8c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x298d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_298d90:
    // 0x298d90: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x298d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_298d94:
    // 0x298d94: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x298d94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_298d98:
    // 0x298d98: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x298d98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_298d9c:
    // 0x298d9c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x298d9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_298da0:
    // 0x298da0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x298da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_298da4:
    // 0x298da4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x298da4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_298da8:
    // 0x298da8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_298dac:
    // 0x298dac: 0x3e00008  jr          $ra
label_298db0:
    if (ctx->pc == 0x298DB0u) {
        ctx->pc = 0x298DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DACu;
        // 0x298db0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298DB4u;
        goto label_298db4;
    }
    ctx->pc = 0x298DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DACu;
        // 0x298db0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298DB4u;
label_298db4:
    // 0x298db4: 0x0  nop
    ctx->pc = 0x298db4u;
    // NOP
    if (ctx->pc == 0x298db4u) { ctx->pc = 0x298db8u; }
}
