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

// Function: sub_001A4F20
// Address: 0x1a4f20 - 0x1a50c0
void sub_001A4F20_0x1a4f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4F20_0x1a4f20");
#endif

    switch (ctx->pc) {
        case 0x1a4f68u: goto label_1a4f68;
        case 0x1a4fccu: goto label_1a4fcc;
        default: break;
    }

    ctx->pc = 0x1a4f20u;

    // 0x1a4f20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a4f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a4f24: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a4f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a4f28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a4f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a4f2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a4f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a4f30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a4f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a4f34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4f38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a4f38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4f3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a4f40: 0x8c51b8f0  lw          $s1, -0x4710($v0)
    ctx->pc = 0x1a4f40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949104)));
    // 0x1a4f44: 0x3242003f  andi        $v0, $s2, 0x3F
    ctx->pc = 0x1a4f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
    // 0x1a4f48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4F48u;
    {
        const bool branch_taken_0x1a4f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F48u;
        // 0x1a4f4c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f48) {
            ctx->pc = 0x1A4F5Cu;
            goto label_1a4f5c;
        }
    }
    ctx->pc = 0x1A4F50u;
    // 0x1a4f50: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x1a4f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a4f54: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1a4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1a4f58: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x1a4f58u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1a4f5c:
    // 0x1a4f5c: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1A4F5Cu;
    {
        const bool branch_taken_0x1a4f5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4f5c) {
            ctx->pc = 0x1A5098u;
            goto label_1a5098;
        }
    }
    ctx->pc = 0x1A4F64u;
    // 0x1a4f64: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a4f68:
    // 0x1a4f68: 0x54530049  bnel        $v0, $s3, . + 4 + (0x49 << 2)
    ctx->pc = 0x1A4F68u;
    {
        const bool branch_taken_0x1a4f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1a4f68) {
            ctx->pc = 0x1A4F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4F68u;
            // 0x1a4f6c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5090u;
            goto label_1a5090;
        }
    }
    ctx->pc = 0x1A4F70u;
    // 0x1a4f70: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a4f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a4f74: 0x54520003  bnel        $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4F74u;
    {
        const bool branch_taken_0x1a4f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1a4f74) {
            ctx->pc = 0x1A4F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4F74u;
            // 0x1a4f78: 0x242082b  sltu        $at, $s2, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4F84u;
            goto label_1a4f84;
        }
    }
    ctx->pc = 0x1A4F7Cu;
    // 0x1a4f7c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1A4F7Cu;
    {
        const bool branch_taken_0x1a4f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F7Cu;
        // 0x1a4f80: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f7c) {
            ctx->pc = 0x1A509Cu;
            goto label_1a509c;
        }
    }
    ctx->pc = 0x1A4F84u;
label_1a4f84:
    // 0x1a4f84: 0x50200022  beql        $at, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A4F84u;
    {
        const bool branch_taken_0x1a4f84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4f84) {
            ctx->pc = 0x1A4F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4F84u;
            // 0x1a4f88: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5010u;
            goto label_1a5010;
        }
    }
    ctx->pc = 0x1A4F8Cu;
    // 0x1a4f8c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a4f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a4f90: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x1a4f90u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a4f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4f98: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a4f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a4f9c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A4F9Cu;
    {
        const bool branch_taken_0x1a4f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a4f9c) {
            ctx->pc = 0x1A4FC4u;
            goto label_1a4fc4;
        }
    }
    ctx->pc = 0x1A4FA4u;
    // 0x1a4fa4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a4fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a4fa8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a4fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a4fac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1a4facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1a4fb0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a4fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a4fb4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a4fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a4fb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a4fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a4fbc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A4FBCu;
    {
        const bool branch_taken_0x1a4fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FBCu;
        // 0x1a4fc0: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fbc) {
            ctx->pc = 0x1A5004u;
            goto label_1a5004;
        }
    }
    ctx->pc = 0x1A4FC4u;
label_1a4fc4:
    // 0x1a4fc4: 0xc069274  jal         func_1A49D0
    ctx->pc = 0x1A4FC4u;
    SET_GPR_U32(ctx, 31, 0x1A4FCCu);
    ctx->pc = 0x1A49D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A49D0u, 0x1A4FC4u, 0x1A4FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4FCCu;
label_1a4fcc:
    // 0x1a4fcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4fd0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1a4fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1a4fd4: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x1a4fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
    // 0x1a4fd8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1a4fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a4fdc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a4fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a4fe0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1a4fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1a4fe4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a4fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a4fe8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1a4fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1a4fec: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1a4fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1a4ff0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a4ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a4ff4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4FF4u;
    {
        const bool branch_taken_0x1a4ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ff4) {
            ctx->pc = 0x1A4FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4FF4u;
            // 0x1a4ff8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5004u;
            goto label_1a5004;
        }
    }
    ctx->pc = 0x1A4FFCu;
    // 0x1a4ffc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a4ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a5000: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a5000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1a5004:
    // 0x1a5004: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x1a5004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x1a5008: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1A5008u;
    {
        const bool branch_taken_0x1a5008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5008u;
        // 0x1a500c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5008) {
            ctx->pc = 0x1A509Cu;
            goto label_1a509c;
        }
    }
    ctx->pc = 0x1A5010u;
label_1a5010:
    // 0x1a5010: 0x2423023  subu        $a2, $s2, $v0
    ctx->pc = 0x1a5010u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a5014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5018: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1a5018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a501c: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A501Cu;
    {
        const bool branch_taken_0x1a501c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A5020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A501Cu;
        // 0x1a5020: 0x24a4000c  addiu       $a0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a501c) {
            ctx->pc = 0x1A5088u;
            goto label_1a5088;
        }
    }
    ctx->pc = 0x1A5024u;
    // 0x1a5024: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1a5024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a5028: 0x46082b  sltu        $at, $v0, $a2
    ctx->pc = 0x1a5028u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1a502c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A502Cu;
    {
        const bool branch_taken_0x1a502c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a502c) {
            ctx->pc = 0x1A503Cu;
            goto label_1a503c;
        }
    }
    ctx->pc = 0x1A5034u;
    // 0x1a5034: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1A5034u;
    {
        const bool branch_taken_0x1a5034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5034u;
        // 0x1a5038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5034) {
            ctx->pc = 0x1A509Cu;
            goto label_1a509c;
        }
    }
    ctx->pc = 0x1A503Cu;
label_1a503c:
    // 0x1a503c: 0x54460009  bnel        $v0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A503Cu;
    {
        const bool branch_taken_0x1a503c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1a503c) {
            ctx->pc = 0x1A5040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A503Cu;
            // 0x1a5040: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5064u;
            goto label_1a5064;
        }
    }
    ctx->pc = 0x1A5044u;
    // 0x1a5044: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a5044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a5048: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a5048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a504c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a5050: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1a5050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1a5054: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a5054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a5058: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a5058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a505c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A505Cu;
    {
        const bool branch_taken_0x1a505c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A505Cu;
        // 0x1a5060: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a505c) {
            ctx->pc = 0x1A507Cu;
            goto label_1a507c;
        }
    }
    ctx->pc = 0x1A5064u;
label_1a5064:
    // 0x1a5064: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a5064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a5068: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1a5068u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1a506c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a506cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a5070: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a5070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a5074: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1a5074u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a5078: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1a5078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_1a507c:
    // 0x1a507c: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x1a507cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x1a5080: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5080u;
    {
        const bool branch_taken_0x1a5080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5080u;
        // 0x1a5084: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5080) {
            ctx->pc = 0x1A509Cu;
            goto label_1a509c;
        }
    }
    ctx->pc = 0x1A5088u;
label_1a5088:
    // 0x1a5088: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5088u;
    {
        const bool branch_taken_0x1a5088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5088u;
        // 0x1a508c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5088) {
            ctx->pc = 0x1A509Cu;
            goto label_1a509c;
        }
    }
    ctx->pc = 0x1A5090u;
label_1a5090:
    // 0x1a5090: 0x5620ffb5  bnel        $s1, $zero, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1A5090u;
    {
        const bool branch_taken_0x1a5090 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5090) {
            ctx->pc = 0x1A5094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5090u;
            // 0x1a5094: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4F68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4f68;
        }
    }
    ctx->pc = 0x1A5098u;
label_1a5098:
    // 0x1a5098: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a509c:
    // 0x1a509c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a509cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a50a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a50a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a50a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a50a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a50a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a50a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a50ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a50acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a50b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A50B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50B0u;
        // 0x1a50b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A50B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A50B8u;
    // 0x1a50b8: 0x0  nop
    ctx->pc = 0x1a50b8u;
    // NOP
    // 0x1a50bc: 0x0  nop
    ctx->pc = 0x1a50bcu;
    // NOP
    if (ctx->pc == 0x1a50bcu) { ctx->pc = 0x1a50c0u; }
}
