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

// Function: sub_001C4020
// Address: 0x1c4020 - 0x1c41a8
void sub_001C4020_0x1c4020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4020_0x1c4020");
#endif

    switch (ctx->pc) {
        case 0x1c409cu: goto label_1c409c;
        case 0x1c40a4u: goto label_1c40a4;
        case 0x1c40ccu: goto label_1c40cc;
        case 0x1c40f8u: goto label_1c40f8;
        case 0x1c418cu: goto label_1c418c;
        case 0x1c4194u: goto label_1c4194;
        default: break;
    }

    ctx->pc = 0x1c4020u;

    // 0x1c4020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c4024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4028: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c402c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c402cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c4030: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c4030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4034: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4034u;
    {
        const bool branch_taken_0x1c4034 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4034u;
        // 0x1c4038: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4034) {
            ctx->pc = 0x1C4048u;
            goto label_1c4048;
        }
    }
    ctx->pc = 0x1C403Cu;
    // 0x1c403c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c403cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c4040: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1C4040u;
    {
        const bool branch_taken_0x1c4040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4040u;
        // 0x1c4044: 0xa040e9b0  sb          $zero, -0x1650($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961584), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4040) {
            ctx->pc = 0x1C40D4u;
            goto label_1c40d4;
        }
    }
    ctx->pc = 0x1C4048u;
label_1c4048:
    // 0x1c4048: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1c4048u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c404c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1c404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c4050: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C4050u;
    {
        const bool branch_taken_0x1c4050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4050u;
        // 0x1c4054: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4050) {
            ctx->pc = 0x1C4088u;
            goto label_1c4088;
        }
    }
    ctx->pc = 0x1C4058u;
    // 0x1c4058: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4058u;
    {
        const bool branch_taken_0x1c4058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4058u;
        // 0x1c405c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4058) {
            ctx->pc = 0x1C4088u;
            goto label_1c4088;
        }
    }
    ctx->pc = 0x1C4060u;
    // 0x1c4060: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c4060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c4064: 0x24489f00  addiu       $t0, $v0, -0x6100
    ctx->pc = 0x1c4064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942464));
    // 0x1c4068: 0x2487e9b0  addiu       $a3, $a0, -0x1650
    ctx->pc = 0x1c4068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961584));
    // 0x1c406c: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x1c406cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c4070: 0x81060001  lb          $a2, 0x1($t0)
    ctx->pc = 0x1c4070u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x1c4074: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x1c4074u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c4078: 0xa0e60001  sb          $a2, 0x1($a3)
    ctx->pc = 0x1c4078u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c407c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C407Cu;
    {
        const bool branch_taken_0x1c407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C407Cu;
        // 0x1c4080: 0x2491e9b0  addiu       $s1, $a0, -0x1650 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c407c) {
            ctx->pc = 0x1C4094u;
            goto label_1c4094;
        }
    }
    ctx->pc = 0x1C4084u;
    // 0x1c4084: 0x0  nop
    ctx->pc = 0x1c4084u;
    // NOP
label_1c4088:
    // 0x1c4088: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c4088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c408c: 0xa080e9b0  sb          $zero, -0x1650($a0)
    ctx->pc = 0x1c408cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294961584), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4090: 0x2491e9b0  addiu       $s1, $a0, -0x1650
    ctx->pc = 0x1c4090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961584));
label_1c4094:
    // 0x1c4094: 0xc04a6da  jal         func_129B68
    ctx->pc = 0x1C4094u;
    SET_GPR_U32(ctx, 31, 0x1C409Cu);
    ctx->pc = 0x1C4098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4094u;
    // 0x1c4098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129B68u, 0x1C4094u, 0x1C409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C409Cu;
label_1c409c:
    // 0x1c409c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1C409Cu;
    SET_GPR_U32(ctx, 31, 0x1C40A4u);
    ctx->pc = 0x1C40A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C409Cu;
    // 0x1c40a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1C409Cu, 0x1C40A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40A4u;
label_1c40a4:
    // 0x1c40a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c40a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c40ac: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x1c40acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c40b0: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x1c40b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x1c40b4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C40B4u;
    {
        const bool branch_taken_0x1c40b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C40B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40B4u;
        // 0x1c40b8: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40b4) {
            ctx->pc = 0x1C40C4u;
            goto label_1c40c4;
        }
    }
    ctx->pc = 0x1C40BCu;
    // 0x1c40bc: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C40BCu;
    {
        const bool branch_taken_0x1c40bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40BCu;
        // 0x1c40c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40bc) {
            ctx->pc = 0x1C40D8u;
            goto label_1c40d8;
        }
    }
    ctx->pc = 0x1C40C4u;
label_1c40c4:
    // 0x1c40c4: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1C40C4u;
    SET_GPR_U32(ctx, 31, 0x1C40CCu);
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1C40C4u, 0x1C40CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40CCu;
label_1c40cc:
    // 0x1c40cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c40ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c40d0: 0xa040ffff  sb          $zero, -0x1($v0)
    ctx->pc = 0x1c40d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 0));
label_1c40d4:
    // 0x1c40d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c40d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c40d8:
    // 0x1c40d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c40d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c40dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c40dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c40e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C40E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40E0u;
        // 0x1c40e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C40E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C40E8u;
    // 0x1c40e8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c40e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c40ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C40ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40ECu;
        // 0x1c40f0: 0x2442e9b0  addiu       $v0, $v0, -0x1650 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C40ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C40F4u;
    // 0x1c40f4: 0x0  nop
    ctx->pc = 0x1c40f4u;
    // NOP
label_1c40f8:
    // 0x1c40f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c40f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c40fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c40fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4104: 0x8070522  j           func_1C1488
    ctx->pc = 0x1C4104u;
    ctx->pc = 0x1C4108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4104u;
    // 0x1c4108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1488u, 0x1C4104u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C410Cu;
    // 0x1c410c: 0x0  nop
    ctx->pc = 0x1c410cu;
    // NOP
    // 0x1c4110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c411c: 0x80704d8  j           func_1C1360
    ctx->pc = 0x1C411Cu;
    ctx->pc = 0x1C4120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C411Cu;
    // 0x1c4120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1360u, 0x1C411Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C4124u;
    // 0x1c4124: 0x0  nop
    ctx->pc = 0x1c4124u;
    // NOP
    // 0x1c4128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c412c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c412cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4134: 0x80704e8  j           func_1C13A0
    ctx->pc = 0x1C4134u;
    ctx->pc = 0x1C4138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4134u;
    // 0x1c4138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C13A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C13A0u, 0x1C4134u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C413Cu;
    // 0x1c413c: 0x0  nop
    ctx->pc = 0x1c413cu;
    // NOP
    // 0x1c4140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c414c: 0x80704ec  j           func_1C13B0
    ctx->pc = 0x1C414Cu;
    ctx->pc = 0x1C4150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C414Cu;
    // 0x1c4150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C13B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C13B0u, 0x1C414Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C4154u;
    // 0x1c4154: 0x0  nop
    ctx->pc = 0x1c4154u;
    // NOP
    // 0x1c4158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c415c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4164: 0x8070502  j           func_1C1408
    ctx->pc = 0x1C4164u;
    ctx->pc = 0x1C4168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4164u;
    // 0x1c4168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1408u, 0x1C4164u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C416Cu;
    // 0x1c416c: 0x0  nop
    ctx->pc = 0x1c416cu;
    // NOP
    // 0x1c4170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4174: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c4174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c4178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c417c: 0x2442eb38  addiu       $v0, $v0, -0x14C8
    ctx->pc = 0x1c417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961976));
    // 0x1c4180: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c4180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4184: 0xc0716e4  jal         func_1C5B90
    ctx->pc = 0x1C4184u;
    SET_GPR_U32(ctx, 31, 0x1C418Cu);
    ctx->pc = 0x1C4188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4184u;
    // 0x1c4188: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5B90u, 0x1C4184u, 0x1C418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C418Cu;
label_1c418c:
    // 0x1c418c: 0xc071708  jal         func_1C5C20
    ctx->pc = 0x1C418Cu;
    SET_GPR_U32(ctx, 31, 0x1C4194u);
    ctx->pc = 0x1C4190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C418Cu;
    // 0x1c4190: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5C20u, 0x1C418Cu, 0x1C4194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4194u;
label_1c4194:
    // 0x1c4194: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c4194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c4198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c419c: 0x2442eb48  addiu       $v0, $v0, -0x14B8
    ctx->pc = 0x1c419cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961992));
    // 0x1c41a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C41A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C41A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41A0u;
        // 0x1c41a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C41A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C41A8u;
}
