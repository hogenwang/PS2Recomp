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

// Function: sub_0010AA98
// Address: 0x10aa98 - 0x10ab68
void sub_0010AA98_0x10aa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AA98_0x10aa98");
#endif

    switch (ctx->pc) {
        case 0x10aad4u: goto label_10aad4;
        case 0x10ab34u: goto label_10ab34;
        case 0x10ab3cu: goto label_10ab3c;
        default: break;
    }

    ctx->pc = 0x10aa98u;

    // 0x10aa98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10aa98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10aa9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10aaa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10aaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10aaa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10aaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10aaa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10aaa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aaac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10aaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10aab0: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x10aab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x10aab4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10AAB4u;
    {
        const bool branch_taken_0x10aab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAB4u;
        // 0x10aab8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aab4) {
            ctx->pc = 0x10AAE0u;
            goto label_10aae0;
        }
    }
    ctx->pc = 0x10AABCu;
    // 0x10aabc: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x10aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x10aac0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10AAC0u;
    {
        const bool branch_taken_0x10aac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAC0u;
        // 0x10aac4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aac0) {
            ctx->pc = 0x10AAE0u;
            goto label_10aae0;
        }
    }
    ctx->pc = 0x10AAC8u;
    // 0x10aac8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x10aac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x10aacc: 0xc04305a  jal         func_10C168
    ctx->pc = 0x10AACCu;
    SET_GPR_U32(ctx, 31, 0x10AAD4u);
    ctx->pc = 0x10AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AACCu;
    // 0x10aad0: 0x24a5a3e8  addiu       $a1, $a1, -0x5C18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C168u, 0x10AACCu, 0x10AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAD4u;
label_10aad4:
    // 0x10aad4: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x10aad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x10aad8: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x10aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x10aadc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10aae0:
    // 0x10aae0: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10AAE0u;
    {
        const bool branch_taken_0x10aae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAE0u;
        // 0x10aae4: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aae0) {
            ctx->pc = 0x10AB1Cu;
            goto label_10ab1c;
        }
    }
    ctx->pc = 0x10AAE8u;
    // 0x10aae8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AAE8u;
    {
        const bool branch_taken_0x10aae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAE8u;
        // 0x10aaec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aae8) {
            ctx->pc = 0x10AB00u;
            goto label_10ab00;
        }
    }
    ctx->pc = 0x10AAF0u;
    // 0x10aaf0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10AAF0u;
    {
        const bool branch_taken_0x10aaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAF0u;
        // 0x10aaf4: 0x3c05003e  lui         $a1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aaf0) {
            ctx->pc = 0x10AB14u;
            goto label_10ab14;
        }
    }
    ctx->pc = 0x10AAF8u;
    // 0x10aaf8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10AAF8u;
    {
        const bool branch_taken_0x10aaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAF8u;
        // 0x10aafc: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aaf8) {
            ctx->pc = 0x10AB28u;
            goto label_10ab28;
        }
    }
    ctx->pc = 0x10AB00u;
label_10ab00:
    // 0x10ab00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10ab04: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10AB04u;
    {
        const bool branch_taken_0x10ab04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB04u;
        // 0x10ab08: 0x3c05003e  lui         $a1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab04) {
            ctx->pc = 0x10AB24u;
            goto label_10ab24;
        }
    }
    ctx->pc = 0x10AB0Cu;
    // 0x10ab0c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10AB0Cu;
    {
        const bool branch_taken_0x10ab0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB0Cu;
        // 0x10ab10: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab0c) {
            ctx->pc = 0x10AB34u;
            goto label_10ab34;
        }
    }
    ctx->pc = 0x10AB14u;
label_10ab14:
    // 0x10ab14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10AB14u;
    {
        const bool branch_taken_0x10ab14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB14u;
        // 0x10ab18: 0x8e1101e0  lw          $s1, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab14) {
            ctx->pc = 0x10AB34u;
            goto label_10ab34;
        }
    }
    ctx->pc = 0x10AB1Cu;
label_10ab1c:
    // 0x10ab1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10AB1Cu;
    {
        const bool branch_taken_0x10ab1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB1Cu;
        // 0x10ab20: 0x8e1101f0  lw          $s1, 0x1F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab1c) {
            ctx->pc = 0x10AB34u;
            goto label_10ab34;
        }
    }
    ctx->pc = 0x10AB24u;
label_10ab24:
    // 0x10ab24: 0x8e1101d0  lw          $s1, 0x1D0($s0)
    ctx->pc = 0x10ab24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
label_10ab28:
    // 0x10ab28: 0x24a5a408  addiu       $a1, $a1, -0x5BF8
    ctx->pc = 0x10ab28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943752));
    // 0x10ab2c: 0xc04305a  jal         func_10C168
    ctx->pc = 0x10AB2Cu;
    SET_GPR_U32(ctx, 31, 0x10AB34u);
    ctx->pc = 0x10AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB2Cu;
    // 0x10ab30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C168u, 0x10AB2Cu, 0x10AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB34u;
label_10ab34:
    // 0x10ab34: 0xc04171a  jal         func_105C68
    ctx->pc = 0x10AB34u;
    SET_GPR_U32(ctx, 31, 0x10AB3Cu);
    ctx->pc = 0x10AB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB34u;
    // 0x10ab38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x10AB34u, 0x10AB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB3Cu;
label_10ab3c:
    // 0x10ab3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10ab3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab40: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10AB40u;
    {
        const bool branch_taken_0x10ab40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB40u;
        // 0x10ab44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab40) {
            ctx->pc = 0x10AB4Cu;
            goto label_10ab4c;
        }
    }
    ctx->pc = 0x10AB48u;
    // 0x10ab48: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x10ab48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_10ab4c:
    // 0x10ab4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ab4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ab50: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10ab50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ab54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ab58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ab58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ab5c: 0x3e00008  jr          $ra
    ctx->pc = 0x10AB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB5Cu;
        // 0x10ab60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AB64u;
    // 0x10ab64: 0x0  nop
    ctx->pc = 0x10ab64u;
    // NOP
    if (ctx->pc == 0x10ab64u) { ctx->pc = 0x10ab68u; }
}
