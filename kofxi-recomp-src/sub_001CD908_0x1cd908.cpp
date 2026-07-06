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

// Function: sub_001CD908
// Address: 0x1cd908 - 0x1cda00
void sub_001CD908_0x1cd908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD908_0x1cd908");
#endif

    switch (ctx->pc) {
        case 0x1cd948u: goto label_1cd948;
        case 0x1cd988u: goto label_1cd988;
        case 0x1cd9bcu: goto label_1cd9bc;
        case 0x1cd9d0u: goto label_1cd9d0;
        default: break;
    }

    ctx->pc = 0x1cd908u;

    // 0x1cd908: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cd908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cd90c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cd90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cd910: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cd910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cd914: 0x2450da00  addiu       $s0, $v0, -0x2600
    ctx->pc = 0x1cd914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957568));
    // 0x1cd918: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1cd918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1cd91c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cd91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd920: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cd920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cd924: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cd924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd928: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1cd928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1cd92c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cd92cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd930: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cd930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cd934: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1cd934u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd938: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CD938u;
    {
        const bool branch_taken_0x1cd938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD938u;
        // 0x1cd93c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd938) {
            ctx->pc = 0x1CD96Cu;
            goto label_1cd96c;
        }
    }
    ctx->pc = 0x1CD940u;
    // 0x1cd940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cd940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd944: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1cd944u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd948:
    // 0x1cd948: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cd948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cd94c: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x1cd94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x1cd950: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x1cd950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1cd954: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD954u;
    {
        const bool branch_taken_0x1cd954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD954u;
        // 0x1cd958: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd954) {
            ctx->pc = 0x1CD96Cu;
            goto label_1cd96c;
        }
    }
    ctx->pc = 0x1CD95Cu;
    // 0x1cd95c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1cd95cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cd960: 0x0  nop
    ctx->pc = 0x1cd960u;
    // NOP
    // 0x1cd964: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CD964u;
    {
        const bool branch_taken_0x1cd964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD964u;
        // 0x1cd968: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd964) {
            ctx->pc = 0x1CD948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd948;
        }
    }
    ctx->pc = 0x1CD96Cu;
label_1cd96c:
    // 0x1cd96c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1cd96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1cd970: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CD970u;
    {
        const bool branch_taken_0x1cd970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CD974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD970u;
        // 0x1cd974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd970) {
            ctx->pc = 0x1CD9E4u;
            goto label_1cd9e4;
        }
    }
    ctx->pc = 0x1CD978u;
    // 0x1cd978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd97c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd980: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1CD980u;
    SET_GPR_U32(ctx, 31, 0x1CD988u);
    ctx->pc = 0x1CD984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD980u;
    // 0x1cd984: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1CD980u, 0x1CD988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD988u;
label_1cd988:
    // 0x1cd988: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1cd988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x1cd98c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1cd98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1cd990: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cd990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd994: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1cd994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1cd998: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cd998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd99c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1cd99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cd9a0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1cd9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9a4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1cd9a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd9a8: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1cd9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x1cd9ac: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x1cd9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x1cd9b0: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1cd9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x1cd9b4: 0xc07096e  jal         func_1C25B8
    ctx->pc = 0x1CD9B4u;
    SET_GPR_U32(ctx, 31, 0x1CD9BCu);
    ctx->pc = 0x1CD9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9B4u;
    // 0x1cd9b8: 0xafb0000c  sw          $s0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25B8u, 0x1CD9B4u, 0x1CD9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9BCu;
label_1cd9bc:
    // 0x1cd9bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD9BCu;
    {
        const bool branch_taken_0x1cd9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9BCu;
        // 0x1cd9c0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd9bc) {
            ctx->pc = 0x1CD9D8u;
            goto label_1cd9d8;
        }
    }
    ctx->pc = 0x1CD9C4u;
    // 0x1cd9c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cd9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cd9c8: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1CD9C8u;
    SET_GPR_U32(ctx, 31, 0x1CD9D0u);
    ctx->pc = 0x1CD9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9C8u;
    // 0x1cd9cc: 0x2484bdb8  addiu       $a0, $a0, -0x4248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1CD9C8u, 0x1CD9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9D0u;
label_1cd9d0:
    // 0x1cd9d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD9D0u;
    {
        const bool branch_taken_0x1cd9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9D0u;
        // 0x1cd9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd9d0) {
            ctx->pc = 0x1CD9E4u;
            goto label_1cd9e4;
        }
    }
    ctx->pc = 0x1CD9D8u;
label_1cd9d8:
    // 0x1cd9d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cd9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd9dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cd9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9e0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1cd9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_1cd9e4:
    // 0x1cd9e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cd9e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd9e8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1cd9e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cd9ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cd9ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd9f0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1cd9f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cd9f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cd9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9F8u;
        // 0x1cd9fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDA00u;
}
