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

// Function: sub_0022BB80
// Address: 0x22bb80 - 0x22bd00
void sub_0022BB80_0x22bb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BB80_0x22bb80");
#endif

    switch (ctx->pc) {
        case 0x22bbd8u: goto label_22bbd8;
        case 0x22bbf0u: goto label_22bbf0;
        case 0x22bc30u: goto label_22bc30;
        case 0x22bc48u: goto label_22bc48;
        case 0x22bca0u: goto label_22bca0;
        default: break;
    }

    ctx->pc = 0x22bb80u;

    // 0x22bb80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22bb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22bb84: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x22bb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x22bb88: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x22bb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x22bb8c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x22bb8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb90: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22bb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22bb94: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x22bb94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb98: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22bb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22bb9c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22bb9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bba0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22bba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22bba4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22bba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bba8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22bba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22bbac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22bbacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bbb0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x22bbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x22bbb4: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x22bbb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bbb8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x22bbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22bbbc: 0x12e00044  beqz        $s7, . + 4 + (0x44 << 2)
    ctx->pc = 0x22BBBCu;
    {
        const bool branch_taken_0x22bbbc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBBCu;
        // 0x22bbc0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bbbc) {
            ctx->pc = 0x22BCD0u;
            goto label_22bcd0;
        }
    }
    ctx->pc = 0x22BBC4u;
    // 0x22bbc4: 0x8ef0000c  lw          $s0, 0xC($s7)
    ctx->pc = 0x22bbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x22bbc8: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x22bbc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x22bbcc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x22BBCCu;
    {
        const bool branch_taken_0x22bbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBCCu;
        // 0x22bbd0: 0x241500ec  addiu       $s5, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bbcc) {
            ctx->pc = 0x22BC28u;
            goto label_22bc28;
        }
    }
    ctx->pc = 0x22BBD4u;
    // 0x22bbd4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x22bbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22bbd8:
    // 0x22bbd8: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x22bbd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x22bbdc: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x22BBDCu;
    {
        const bool branch_taken_0x22bbdc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBDCu;
        // 0x22bbe0: 0x2709823  subu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bbdc) {
            ctx->pc = 0x22BC14u;
            goto label_22bc14;
        }
    }
    ctx->pc = 0x22BBE4u;
    // 0x22bbe4: 0x86250010  lh          $a1, 0x10($s1)
    ctx->pc = 0x22bbe4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x22bbe8: 0xc08a96c  jal         func_22A5B0
    ctx->pc = 0x22BBE8u;
    SET_GPR_U32(ctx, 31, 0x22BBF0u);
    ctx->pc = 0x22BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BBE8u;
    // 0x22bbec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A5B0u, 0x22BBE8u, 0x22BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BBF0u;
label_22bbf0:
    // 0x22bbf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22bbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bbf4: 0x10a0002e  beqz        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x22BBF4u;
    {
        const bool branch_taken_0x22bbf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBF4u;
        // 0x22bbf8: 0x2531021  addu        $v0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bbf4) {
            ctx->pc = 0x22BCB0u;
            goto label_22bcb0;
        }
    }
    ctx->pc = 0x22BBFCu;
    // 0x22bbfc: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x22bbfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bc00: 0x2a2202b  sltu        $a0, $s5, $v0
    ctx->pc = 0x22bc00u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22bc04: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22bc04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bc08: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x22bc08u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x22bc0c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x22bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x22bc10: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x22bc10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_22bc14:
    // 0x22bc14: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22bc14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bc18: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x22bc18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22bc1c: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x22bc1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x22bc20: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x22BC20u;
    {
        const bool branch_taken_0x22bc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bc20) {
            ctx->pc = 0x22BC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BC20u;
            // 0x22bc24: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BBD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22bbd8;
        }
    }
    ctx->pc = 0x22BC28u;
label_22bc28:
    // 0x22bc28: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x22BC28u;
    {
        const bool branch_taken_0x22bc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC28u;
        // 0x22bc2c: 0x241500ec  addiu       $s5, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc28) {
            ctx->pc = 0x22BC6Cu;
            goto label_22bc6c;
        }
    }
    ctx->pc = 0x22BC30u;
label_22bc30:
    // 0x22bc30: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x22bc30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22bc34: 0x54c0000d  bnel        $a2, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x22BC34u;
    {
        const bool branch_taken_0x22bc34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bc34) {
            ctx->pc = 0x22BC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BC34u;
            // 0x22bc38: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BC6Cu;
            goto label_22bc6c;
        }
    }
    ctx->pc = 0x22BC3Cu;
    // 0x22bc3c: 0x86250010  lh          $a1, 0x10($s1)
    ctx->pc = 0x22bc3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x22bc40: 0xc08a922  jal         func_22A488
    ctx->pc = 0x22BC40u;
    SET_GPR_U32(ctx, 31, 0x22BC48u);
    ctx->pc = 0x22BC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BC40u;
    // 0x22bc44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A488u, 0x22BC40u, 0x22BC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BC48u;
label_22bc48:
    // 0x22bc48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22bc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bc4c: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x22BC4Cu;
    {
        const bool branch_taken_0x22bc4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC4Cu;
        // 0x22bc50: 0x2b2182b  sltu        $v1, $s5, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc4c) {
            ctx->pc = 0x22BCB0u;
            goto label_22bcb0;
        }
    }
    ctx->pc = 0x22BC54u;
    // 0x22bc54: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x22bc54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bc58: 0x243100a  movz        $v0, $s2, $v1
    ctx->pc = 0x22bc58u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x22bc5c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22bc5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bc60: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x22bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x22bc64: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x22bc64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x22bc68: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22bc68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22bc6c:
    // 0x22bc6c: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x22BC6Cu;
    {
        const bool branch_taken_0x22bc6c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x22BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC6Cu;
        // 0x22bc70: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc6c) {
            ctx->pc = 0x22BCB0u;
            goto label_22bcb0;
        }
    }
    ctx->pc = 0x22BC74u;
    // 0x22bc74: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x22bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22bc78: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22bc7c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x22bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x22bc80: 0x52182b  sltu        $v1, $v0, $s2
    ctx->pc = 0x22bc80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x22bc84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22bc84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bc88: 0x243800a  movz        $s0, $s2, $v1
    ctx->pc = 0x22bc88u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x22bc8c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x22bc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x22bc90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22bc90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bc94: 0x2d0b021  addu        $s6, $s6, $s0
    ctx->pc = 0x22bc94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x22bc98: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x22BC98u;
    SET_GPR_U32(ctx, 31, 0x22BCA0u);
    ctx->pc = 0x22BC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BC98u;
    // 0x22bc9c: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x22BC98u, 0x22BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BCA0u;
label_22bca0:
    // 0x22bca0: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x22bca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x22bca4: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x22bca4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x22bca8: 0x1640ffe1  bnez        $s2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x22BCA8u;
    {
        const bool branch_taken_0x22bca8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCA8u;
        // 0x22bcac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bca8) {
            ctx->pc = 0x22BC30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22bc30;
        }
    }
    ctx->pc = 0x22BCB0u;
label_22bcb0:
    // 0x22bcb0: 0x96e20012  lhu         $v0, 0x12($s7)
    ctx->pc = 0x22bcb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x22bcb4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22bcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x22bcb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22BCB8u;
    {
        const bool branch_taken_0x22bcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCB8u;
        // 0x22bcbc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bcb8) {
            ctx->pc = 0x22BCD4u;
            goto label_22bcd4;
        }
    }
    ctx->pc = 0x22BCC0u;
    // 0x22bcc0: 0x8ee20018  lw          $v0, 0x18($s7)
    ctx->pc = 0x22bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x22bcc4: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x22bcc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x22bcc8: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x22BCC8u;
    {
        const bool branch_taken_0x22bcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bcc8) {
            ctx->pc = 0x22BCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BCC8u;
            // 0x22bccc: 0xaef40018  sw          $s4, 0x18($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BCD4u;
            goto label_22bcd4;
        }
    }
    ctx->pc = 0x22BCD0u;
label_22bcd0:
    // 0x22bcd0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x22bcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_22bcd4:
    // 0x22bcd4: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x22bcd4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22bcd8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x22bcd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22bcdc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22bcdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22bce0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22bce0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22bce4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22bce4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22bce8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22bce8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bcec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22bcecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bcf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22bcf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x22BCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCF4u;
        // 0x22bcf8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BCFCu;
    // 0x22bcfc: 0x0  nop
    ctx->pc = 0x22bcfcu;
    // NOP
    if (ctx->pc == 0x22bcfcu) { ctx->pc = 0x22bd00u; }
}
