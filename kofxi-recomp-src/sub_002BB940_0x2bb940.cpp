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

// Function: sub_002BB940
// Address: 0x2bb940 - 0x2bba10
void sub_002BB940_0x2bb940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB940_0x2bb940");
#endif

    switch (ctx->pc) {
        case 0x2bb960u: goto label_2bb960;
        case 0x2bb98cu: goto label_2bb98c;
        case 0x2bb99cu: goto label_2bb99c;
        case 0x2bb9b8u: goto label_2bb9b8;
        case 0x2bb9d8u: goto label_2bb9d8;
        case 0x2bb9f4u: goto label_2bb9f4;
        case 0x2bb9fcu: goto label_2bb9fc;
        default: break;
    }

    ctx->pc = 0x2bb940u;

    // 0x2bb940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bb940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bb944: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2bb944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2bb948: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bb948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb94c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2bb94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2bb950: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bb950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bb954: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bb954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb958: 0xc0a8df2  jal         func_2A37C8
    ctx->pc = 0x2BB958u;
    SET_GPR_U32(ctx, 31, 0x2BB960u);
    ctx->pc = 0x2BB95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB958u;
    // 0x2bb95c: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A37C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A37C8u, 0x2BB958u, 0x2BB960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB960u;
label_2bb960:
    // 0x2bb960: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2bb960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb964: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2bb964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2bb968: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x2bb968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x2bb96c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2BB96Cu;
    {
        const bool branch_taken_0x2bb96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB96Cu;
        // 0x2bb970: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb96c) {
            ctx->pc = 0x2BB9FCu;
            goto label_2bb9fc;
        }
    }
    ctx->pc = 0x2BB974u;
    // 0x2bb974: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BB974u;
    {
        const bool branch_taken_0x2bb974 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB974u;
        // 0x2bb978: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb974) {
            ctx->pc = 0x2BB994u;
            goto label_2bb994;
        }
    }
    ctx->pc = 0x2BB97Cu;
    // 0x2bb97c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2bb97cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2bb980: 0x2484e860  addiu       $a0, $a0, -0x17A0
    ctx->pc = 0x2bb980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961248));
    // 0x2bb984: 0xc0a8e64  jal         func_2A3990
    ctx->pc = 0x2BB984u;
    SET_GPR_U32(ctx, 31, 0x2BB98Cu);
    ctx->pc = 0x2BB988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB984u;
    // 0x2bb988: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3990u, 0x2BB984u, 0x2BB98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB98Cu;
label_2bb98c:
    // 0x2bb98c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB98Cu;
    {
        const bool branch_taken_0x2bb98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB98Cu;
        // 0x2bb990: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb98c) {
            ctx->pc = 0x2BB9A0u;
            goto label_2bb9a0;
        }
    }
    ctx->pc = 0x2BB994u;
label_2bb994:
    // 0x2bb994: 0xc0a8a3e  jal         func_2A28F8
    ctx->pc = 0x2BB994u;
    SET_GPR_U32(ctx, 31, 0x2BB99Cu);
    ctx->pc = 0x2BB998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB994u;
    // 0x2bb998: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A28F8u, 0x2BB994u, 0x2BB99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB99Cu;
label_2bb99c:
    // 0x2bb99c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2bb99cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_2bb9a0:
    // 0x2bb9a0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2bb9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2bb9a4: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x2bb9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x2bb9a8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2bb9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2bb9ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bb9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb9b0: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2BB9B0u;
    SET_GPR_U32(ctx, 31, 0x2BB9B8u);
    ctx->pc = 0x2BB9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB9B0u;
    // 0x2bb9b4: 0x24070235  addiu       $a3, $zero, 0x235 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 565));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CE8u, 0x2BB9B0u, 0x2BB9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB9B8u;
label_2bb9b8:
    // 0x2bb9b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bb9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bb9bc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bb9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2bb9c0: 0x24a5b888  addiu       $a1, $a1, -0x4778
    ctx->pc = 0x2bb9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949000));
    // 0x2bb9c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bb9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb9c8: 0xdc710028  ld          $s1, 0x28($v1)
    ctx->pc = 0x2bb9c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2bb9cc: 0xfc600028  sd          $zero, 0x28($v1)
    ctx->pc = 0x2bb9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 0));
    // 0x2bb9d0: 0xc0a625e  jal         func_298978
    ctx->pc = 0x2BB9D0u;
    SET_GPR_U32(ctx, 31, 0x2BB9D8u);
    ctx->pc = 0x2BB9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB9D0u;
    // 0x2bb9d4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298978u, 0x2BB9D0u, 0x2BB9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB9D8u;
label_2bb9d8:
    // 0x2bb9d8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2bb9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bb9dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bb9dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb9e0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2bb9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2bb9e4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2bb9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2bb9e8: 0xfc510028  sd          $s1, 0x28($v0)
    ctx->pc = 0x2bb9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 17));
    // 0x2bb9ec: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2BB9ECu;
    SET_GPR_U32(ctx, 31, 0x2BB9F4u);
    ctx->pc = 0x2BB9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB9ECu;
    // 0x2bb9f0: 0x2407023a  addiu       $a3, $zero, 0x23A (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CE8u, 0x2BB9ECu, 0x2BB9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB9F4u;
label_2bb9f4:
    // 0x2bb9f4: 0xc0a8e0a  jal         func_2A3828
    ctx->pc = 0x2BB9F4u;
    SET_GPR_U32(ctx, 31, 0x2BB9FCu);
    ctx->pc = 0x2BB9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB9F4u;
    // 0x2bb9f8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3828u, 0x2BB9F4u, 0x2BB9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB9FCu;
label_2bb9fc:
    // 0x2bb9fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bb9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bba00: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2bba00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bba04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2bba04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bba08: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA08u;
        // 0x2bba0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBA10u;
}
