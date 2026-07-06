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

// Function: sub_001EE210
// Address: 0x1ee210 - 0x1ee2f0
void sub_001EE210_0x1ee210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE210_0x1ee210");
#endif

    switch (ctx->pc) {
        case 0x1ee260u: goto label_1ee260;
        case 0x1ee278u: goto label_1ee278;
        case 0x1ee284u: goto label_1ee284;
        case 0x1ee2bcu: goto label_1ee2bc;
        default: break;
    }

    ctx->pc = 0x1ee210u;

    // 0x1ee210: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ee210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ee214: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ee214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ee218: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ee218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee21c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ee21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ee220: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ee220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee224: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ee224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ee228: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ee228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ee22c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ee22cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee230: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ee230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ee234: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ee234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ee238: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ee238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ee23c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1ee23cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1ee240: 0x8eb20028  lw          $s2, 0x28($s5)
    ctx->pc = 0x1ee240u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1ee244: 0x26420003  addiu       $v0, $s2, 0x3
    ctx->pc = 0x1ee244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x1ee248: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1ee248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ee24c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE24Cu;
    {
        const bool branch_taken_0x1ee24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE24Cu;
        // 0x1ee250: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee24c) {
            ctx->pc = 0x1EE268u;
            goto label_1ee268;
        }
    }
    ctx->pc = 0x1EE254u;
    // 0x1ee254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee258: 0xc07b8bc  jal         func_1EE2F0
    ctx->pc = 0x1EE258u;
    SET_GPR_U32(ctx, 31, 0x1EE260u);
    ctx->pc = 0x1EE25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE258u;
    // 0x1ee25c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE2F0u, 0x1EE258u, 0x1EE260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE260u;
label_1ee260:
    // 0x1ee260: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EE260u;
    {
        const bool branch_taken_0x1ee260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee260) {
            ctx->pc = 0x1EE264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE260u;
            // 0x1ee264: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE2C8u;
            goto label_1ee2c8;
        }
    }
    ctx->pc = 0x1EE268u;
label_1ee268:
    // 0x1ee268: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1ee268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ee26c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EE26Cu;
    {
        const bool branch_taken_0x1ee26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE26Cu;
        // 0x1ee270: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee26c) {
            ctx->pc = 0x1EE2A0u;
            goto label_1ee2a0;
        }
    }
    ctx->pc = 0x1EE274u;
    // 0x1ee274: 0x3c14000d  lui         $s4, 0xD
    ctx->pc = 0x1ee274u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)13 << 16));
label_1ee278:
    // 0x1ee278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee27c: 0xc076086  jal         func_1D8218
    ctx->pc = 0x1EE27Cu;
    SET_GPR_U32(ctx, 31, 0x1EE284u);
    ctx->pc = 0x1EE280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE27Cu;
    // 0x1ee280: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8218u, 0x1EE27Cu, 0x1EE284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE284u;
label_1ee284:
    // 0x1ee284: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x1ee284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x1ee288: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1EE288u;
    {
        const bool branch_taken_0x1ee288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee288) {
            ctx->pc = 0x1EE28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE288u;
            // 0x1ee28c: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE2C8u;
            goto label_1ee2c8;
        }
    }
    ctx->pc = 0x1EE290u;
    // 0x1ee290: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ee290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1ee294: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1ee294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ee298: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EE298u;
    {
        const bool branch_taken_0x1ee298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE298u;
        // 0x1ee29c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee298) {
            ctx->pc = 0x1EE278u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ee278;
        }
    }
    ctx->pc = 0x1EE2A0u;
label_1ee2a0:
    // 0x1ee2a0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1ee2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1ee2a4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1ee2a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ee2a8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE2A8u;
    {
        const bool branch_taken_0x1ee2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee2a8) {
            ctx->pc = 0x1EE2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE2A8u;
            // 0x1ee2ac: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE2C8u;
            goto label_1ee2c8;
        }
    }
    ctx->pc = 0x1EE2B0u;
    // 0x1ee2b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ee2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee2b4: 0xc07b8cc  jal         func_1EE330
    ctx->pc = 0x1EE2B4u;
    SET_GPR_U32(ctx, 31, 0x1EE2BCu);
    ctx->pc = 0x1EE2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2B4u;
    // 0x1ee2b8: 0x2302821  addu        $a1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE330u, 0x1EE2B4u, 0x1EE2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE2BCu;
label_1ee2bc:
    // 0x1ee2bc: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x1ee2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1ee2c0: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x1ee2c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x1ee2c4: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x1ee2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
label_1ee2c8:
    // 0x1ee2c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ee2c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee2cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ee2ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ee2d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ee2d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee2d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ee2d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ee2d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ee2d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee2dc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ee2dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee2e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ee2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2E4u;
        // 0x1ee2e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE2ECu;
    // 0x1ee2ec: 0x0  nop
    ctx->pc = 0x1ee2ecu;
    // NOP
}
