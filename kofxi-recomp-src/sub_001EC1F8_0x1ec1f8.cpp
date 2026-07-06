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

// Function: sub_001EC1F8
// Address: 0x1ec1f8 - 0x1ec300
void sub_001EC1F8_0x1ec1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC1F8_0x1ec1f8");
#endif

    switch (ctx->pc) {
        case 0x1ec238u: goto label_1ec238;
        case 0x1ec240u: goto label_1ec240;
        case 0x1ec24cu: goto label_1ec24c;
        case 0x1ec270u: goto label_1ec270;
        case 0x1ec2a0u: goto label_1ec2a0;
        case 0x1ec2c0u: goto label_1ec2c0;
        default: break;
    }

    ctx->pc = 0x1ec1f8u;

    // 0x1ec1f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ec1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ec1fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ec1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ec200: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ec200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec204: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ec204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ec208: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ec208u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec20c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ec20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ec210: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1ec210u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec214: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ec214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1ec218: 0x293b021  addu        $s6, $s4, $s3
    ctx->pc = 0x1ec218u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1ec21c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec220: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ec220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ec224: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ec224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ec228: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1ec228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1ec22c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ec22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ec230: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EC230u;
    {
        const bool branch_taken_0x1ec230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC230u;
        // 0x1ec234: 0x8eb70010  lw          $s7, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec230) {
            ctx->pc = 0x1EC258u;
            goto label_1ec258;
        }
    }
    ctx->pc = 0x1EC238u;
label_1ec238:
    // 0x1ec238: 0xc07b1a2  jal         func_1EC688
    ctx->pc = 0x1EC238u;
    SET_GPR_U32(ctx, 31, 0x1EC240u);
    ctx->pc = 0x1EC688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC688u, 0x1EC238u, 0x1EC240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC240u;
label_1ec240:
    // 0x1ec240: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EC240u;
    {
        const bool branch_taken_0x1ec240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC240u;
        // 0x1ec244: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec240) {
            ctx->pc = 0x1EC2D4u;
            goto label_1ec2d4;
        }
    }
    ctx->pc = 0x1EC248u;
    // 0x1ec248: 0x2541023  subu        $v0, $s2, $s4
    ctx->pc = 0x1ec248u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_1ec24c:
    // 0x1ec24c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ec24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ec250: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x1ec250u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ec254: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ec254u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1ec258:
    // 0x1ec258: 0x1a60001e  blez        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x1EC258u;
    {
        const bool branch_taken_0x1ec258 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1EC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC258u;
        // 0x1ec25c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec258) {
            ctx->pc = 0x1EC2D4u;
            goto label_1ec2d4;
        }
    }
    ctx->pc = 0x1EC260u;
    // 0x1ec260: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ec260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec264: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec268: 0xc07b0c0  jal         func_1EC300
    ctx->pc = 0x1EC268u;
    SET_GPR_U32(ctx, 31, 0x1EC270u);
    ctx->pc = 0x1EC26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC268u;
    // 0x1ec26c: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC300u, 0x1EC268u, 0x1EC270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC270u;
label_1ec270:
    // 0x1ec270: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ec270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec274: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec278: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EC278u;
    {
        const bool branch_taken_0x1ec278 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC278u;
        // 0x1ec27c: 0x2d22823  subu        $a1, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec278) {
            ctx->pc = 0x1EC2D0u;
            goto label_1ec2d0;
        }
    }
    ctx->pc = 0x1EC280u;
    // 0x1ec280: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x1ec280u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x1ec284: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1ec284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1ec288: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ec288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec28c: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x1ec28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ec290: 0x5040ffee  beql        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1EC290u;
    {
        const bool branch_taken_0x1ec290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec290) {
            ctx->pc = 0x1EC294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC290u;
            // 0x1ec294: 0x2541023  subu        $v0, $s2, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC24Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ec24c;
        }
    }
    ctx->pc = 0x1EC298u;
    // 0x1ec298: 0xc07b0da  jal         func_1EC368
    ctx->pc = 0x1EC298u;
    SET_GPR_U32(ctx, 31, 0x1EC2A0u);
    ctx->pc = 0x1EC29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC298u;
    // 0x1ec29c: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC368u, 0x1EC298u, 0x1EC2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC2A0u;
label_1ec2a0:
    // 0x1ec2a0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1ec2a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec2a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ec2a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec2a8: 0x2d11023  subu        $v0, $s6, $s1
    ctx->pc = 0x1ec2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1ec2ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ec2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec2b0: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x1ec2b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1ec2b4: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x1ec2b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1ec2b8: 0xc07b0fa  jal         func_1EC3E8
    ctx->pc = 0x1EC2B8u;
    SET_GPR_U32(ctx, 31, 0x1EC2C0u);
    ctx->pc = 0x1EC2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC2B8u;
    // 0x1ec2bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC3E8u, 0x1EC2B8u, 0x1EC2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC2C0u;
label_1ec2c0:
    // 0x1ec2c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ec2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec2c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ec2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec2c8: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1EC2C8u;
    {
        const bool branch_taken_0x1ec2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2C8u;
        // 0x1ec2cc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec2c8) {
            ctx->pc = 0x1EC238u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ec238;
        }
    }
    ctx->pc = 0x1EC2D0u;
label_1ec2d0:
    // 0x1ec2d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec2d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec2d4:
    // 0x1ec2d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ec2d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ec2d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ec2d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec2dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ec2dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec2e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ec2e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec2e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ec2e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ec2e8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ec2e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec2ec: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1ec2ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ec2f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ec2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ec2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2F4u;
        // 0x1ec2f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC2FCu;
    // 0x1ec2fc: 0x0  nop
    ctx->pc = 0x1ec2fcu;
    // NOP
}
