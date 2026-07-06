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

// Function: sub_00298978
// Address: 0x298978 - 0x298a10
void sub_00298978_0x298978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298978_0x298978");
#endif

    switch (ctx->pc) {
        case 0x298978u: goto label_298978;
        case 0x29897cu: goto label_29897c;
        case 0x298980u: goto label_298980;
        case 0x298984u: goto label_298984;
        case 0x298988u: goto label_298988;
        case 0x29898cu: goto label_29898c;
        case 0x298990u: goto label_298990;
        case 0x298994u: goto label_298994;
        case 0x298998u: goto label_298998;
        case 0x29899cu: goto label_29899c;
        case 0x2989a0u: goto label_2989a0;
        case 0x2989a4u: goto label_2989a4;
        case 0x2989a8u: goto label_2989a8;
        case 0x2989acu: goto label_2989ac;
        case 0x2989b0u: goto label_2989b0;
        case 0x2989b4u: goto label_2989b4;
        case 0x2989b8u: goto label_2989b8;
        case 0x2989bcu: goto label_2989bc;
        case 0x2989c0u: goto label_2989c0;
        case 0x2989c4u: goto label_2989c4;
        case 0x2989c8u: goto label_2989c8;
        case 0x2989ccu: goto label_2989cc;
        case 0x2989d0u: goto label_2989d0;
        case 0x2989d4u: goto label_2989d4;
        case 0x2989d8u: goto label_2989d8;
        case 0x2989dcu: goto label_2989dc;
        case 0x2989e0u: goto label_2989e0;
        case 0x2989e4u: goto label_2989e4;
        case 0x2989e8u: goto label_2989e8;
        case 0x2989ecu: goto label_2989ec;
        case 0x2989f0u: goto label_2989f0;
        case 0x2989f4u: goto label_2989f4;
        case 0x2989f8u: goto label_2989f8;
        case 0x2989fcu: goto label_2989fc;
        case 0x298a00u: goto label_298a00;
        case 0x298a04u: goto label_298a04;
        case 0x298a08u: goto label_298a08;
        case 0x298a0cu: goto label_298a0c;
        default: break;
    }

    ctx->pc = 0x298978u;

label_298978:
    // 0x298978: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x298978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_29897c:
    // 0x29897c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29897cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_298980:
    // 0x298980: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x298980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_298984:
    // 0x298984: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x298984u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_298988:
    // 0x298988: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x298988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_29898c:
    // 0x29898c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29898cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_298990:
    // 0x298990: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x298990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_298994:
    // 0x298994: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x298994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_298998:
    // 0x298998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29899c:
    // 0x29899c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x29899cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2989a0:
    // 0x2989a0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2989a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2989a4:
    // 0x2989a4: 0x4800012  bltz        $a0, . + 4 + (0x12 << 2)
label_2989a8:
    if (ctx->pc == 0x2989A8u) {
        ctx->pc = 0x2989A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989A4u;
        // 0x2989a8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2989ACu;
        goto label_2989ac;
    }
    ctx->pc = 0x2989A4u;
    {
        const bool branch_taken_0x2989a4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2989A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989A4u;
        // 0x2989a8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2989a4) {
            ctx->pc = 0x2989F0u;
            goto label_2989f0;
        }
    }
    ctx->pc = 0x2989ACu;
label_2989ac:
    // 0x2989ac: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2989acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2989b0:
    // 0x2989b0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2989b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2989b4:
    // 0x2989b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2989b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2989b8:
    // 0x2989b8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2989b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2989bc:
    // 0x2989bc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2989c0:
    if (ctx->pc == 0x2989C0u) {
        ctx->pc = 0x2989C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989BCu;
        // 0x2989c0: 0x2491ffff  addiu       $s1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2989C4u;
        goto label_2989c4;
    }
    ctx->pc = 0x2989BCu;
    {
        const bool branch_taken_0x2989bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2989C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989BCu;
        // 0x2989c0: 0x2491ffff  addiu       $s1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2989bc) {
            ctx->pc = 0x2989E4u;
            goto label_2989e4;
        }
    }
    ctx->pc = 0x2989C4u;
label_2989c4:
    // 0x2989c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2989c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2989c8:
    // 0x2989c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2989c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2989cc:
    // 0x2989cc: 0x260f809  jalr        $s3
label_2989d0:
    if (ctx->pc == 0x2989D0u) {
        ctx->pc = 0x2989D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989CCu;
        // 0x2989d0: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2989D4u;
        goto label_2989d4;
    }
    ctx->pc = 0x2989CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2989D4u);
        ctx->pc = 0x2989D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989CCu;
        // 0x2989d0: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2989CCu, 0x2989D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2989D4u;
label_2989d4:
    // 0x2989d4: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
label_2989d8:
    if (ctx->pc == 0x2989D8u) {
        ctx->pc = 0x2989D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989D4u;
        // 0x2989d8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2989DCu;
        goto label_2989dc;
    }
    ctx->pc = 0x2989D4u;
    {
        const bool branch_taken_0x2989d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2989d4) {
            ctx->pc = 0x2989D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2989D4u;
            // 0x2989d8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2989C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2989c8;
        }
    }
    ctx->pc = 0x2989DCu;
label_2989dc:
    // 0x2989dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2989e0:
    if (ctx->pc == 0x2989E0u) {
        ctx->pc = 0x2989E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989DCu;
        // 0x2989e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2989E4u;
        goto label_2989e4;
    }
    ctx->pc = 0x2989DCu;
    {
        const bool branch_taken_0x2989dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2989E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989DCu;
        // 0x2989e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2989dc) {
            ctx->pc = 0x2989E8u;
            goto label_2989e8;
        }
    }
    ctx->pc = 0x2989E4u;
label_2989e4:
    // 0x2989e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2989e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2989e8:
    // 0x2989e8: 0x483fff1  bgezl       $a0, . + 4 + (-0xF << 2)
label_2989ec:
    if (ctx->pc == 0x2989ECu) {
        ctx->pc = 0x2989ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989E8u;
        // 0x2989ec: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2989F0u;
        goto label_2989f0;
    }
    ctx->pc = 0x2989E8u;
    {
        const bool branch_taken_0x2989e8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2989e8) {
            ctx->pc = 0x2989ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2989E8u;
            // 0x2989ec: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2989B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2989b0;
        }
    }
    ctx->pc = 0x2989F0u;
label_2989f0:
    // 0x2989f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2989f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2989f4:
    // 0x2989f4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2989f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2989f8:
    // 0x2989f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2989f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2989fc:
    // 0x2989fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2989fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_298a00:
    // 0x298a00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x298a00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_298a04:
    // 0x298a04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_298a08:
    // 0x298a08: 0x3e00008  jr          $ra
label_298a0c:
    if (ctx->pc == 0x298A0Cu) {
        ctx->pc = 0x298A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A08u;
        // 0x298a0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298A10u;
        goto label_fallthrough_0x298a08;
    }
    ctx->pc = 0x298A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A08u;
        // 0x298a0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x298a08:
    ctx->pc = 0x298A10u;
}
