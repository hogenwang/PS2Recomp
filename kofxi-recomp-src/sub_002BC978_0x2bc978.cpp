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

// Function: sub_002BC978
// Address: 0x2bc978 - 0x2bca88
void sub_002BC978_0x2bc978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC978_0x2bc978");
#endif

    switch (ctx->pc) {
        case 0x2bc9ecu: goto label_2bc9ec;
        case 0x2bca10u: goto label_2bca10;
        case 0x2bca30u: goto label_2bca30;
        default: break;
    }

    ctx->pc = 0x2bc978u;

    // 0x2bc978: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2bc978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2bc97c: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x2bc97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x2bc980: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x2bc980u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x2bc984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bc984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bc988: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2bc988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2bc98c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2bc98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2bc990: 0x98043  sra         $s0, $t1, 1
    ctx->pc = 0x2bc990u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 9), 1));
    // 0x2bc994: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2bc994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2bc998: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2bc998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bc99c: 0x110b821  addu        $s7, $t0, $s0
    ctx->pc = 0x2bc99cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2bc9a0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2bc9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2bc9a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2bc9a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9a8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2bc9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2bc9ac: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2bc9acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bc9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bc9b4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2bc9b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9b8: 0x8fb40090  lw          $s4, 0x90($sp)
    ctx->pc = 0x2bc9b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bc9bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2bc9bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bc9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bc9c4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2bc9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2bc9c8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2bc9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9cc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2bc9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2bc9d0: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x2bc9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bc9d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9d8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2bc9d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9dc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2bc9dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9e0: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2bc9e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9e4: 0xc0af1ec  jal         func_2BC7B0
    ctx->pc = 0x2BC9E4u;
    SET_GPR_U32(ctx, 31, 0x2BC9ECu);
    ctx->pc = 0x2BC9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC9E4u;
    // 0x2bc9e8: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC7B0u, 0x2BC9E4u, 0x2BC9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC9ECu;
label_2bc9ec:
    // 0x2bc9ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BC9ECu;
    {
        const bool branch_taken_0x2bc9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9ECu;
        // 0x2bc9f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc9ec) {
            ctx->pc = 0x2BCA18u;
            goto label_2bca18;
        }
    }
    ctx->pc = 0x2BC9F4u;
    // 0x2bc9f4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2bc9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bc9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9fc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2bc9fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca00: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2bca00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca04: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2bca04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca08: 0xc0af1ec  jal         func_2BC7B0
    ctx->pc = 0x2BCA08u;
    SET_GPR_U32(ctx, 31, 0x2BCA10u);
    ctx->pc = 0x2BCA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA08u;
    // 0x2bca0c: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC7B0u, 0x2BCA08u, 0x2BCA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA10u;
label_2bca10:
    // 0x2bca10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BCA10u;
    {
        const bool branch_taken_0x2bca10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bca10) {
            ctx->pc = 0x2BCA20u;
            goto label_2bca20;
        }
    }
    ctx->pc = 0x2BCA18u;
label_2bca18:
    // 0x2bca18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2BCA18u;
    {
        const bool branch_taken_0x2bca18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA18u;
        // 0x2bca1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca18) {
            ctx->pc = 0x2BCA58u;
            goto label_2bca58;
        }
    }
    ctx->pc = 0x2BCA20u;
label_2bca20:
    // 0x2bca20: 0x1a80000c  blez        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x2BCA20u;
    {
        const bool branch_taken_0x2bca20 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2BCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA20u;
        // 0x2bca24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca20) {
            ctx->pc = 0x2BCA54u;
            goto label_2bca54;
        }
    }
    ctx->pc = 0x2BCA28u;
    // 0x2bca28: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2bca28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca2c: 0x0  nop
    ctx->pc = 0x2bca2cu;
    // NOP
label_2bca30:
    // 0x2bca30: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x2bca30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2bca34: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x2bca34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2bca38: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2bca38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bca3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2bca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2bca40: 0xb4182a  slt         $v1, $a1, $s4
    ctx->pc = 0x2bca40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2bca44: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2bca44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2bca48: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x2bca48u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bca4c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2BCA4Cu;
    {
        const bool branch_taken_0x2bca4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BCA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA4Cu;
        // 0x2bca50: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca4c) {
            ctx->pc = 0x2BCA30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bca30;
        }
    }
    ctx->pc = 0x2BCA54u;
label_2bca54:
    // 0x2bca54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bca58:
    // 0x2bca58: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2bca58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bca5c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2bca5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bca60: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2bca60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bca64: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2bca64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bca68: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2bca68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bca6c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bca6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bca70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bca70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bca74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bca74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bca78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bca78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bca7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA7Cu;
        // 0x2bca80: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCA84u;
    // 0x2bca84: 0x0  nop
    ctx->pc = 0x2bca84u;
    // NOP
}
