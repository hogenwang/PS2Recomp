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

// Function: sub_0011FC68
// Address: 0x11fc68 - 0x11fd80
void sub_0011FC68_0x11fc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FC68_0x11fc68");
#endif

    switch (ctx->pc) {
        case 0x11fc88u: goto label_11fc88;
        case 0x11fd18u: goto label_11fd18;
        case 0x11fd40u: goto label_11fd40;
        default: break;
    }

    ctx->pc = 0x11fc68u;

    // 0x11fc68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11fc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11fc6c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11fc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11fc70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11fc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11fc74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11fc74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11fc78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc7c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11fc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11fc80: 0xc047efa  jal         func_11FBE8
    ctx->pc = 0x11FC80u;
    SET_GPR_U32(ctx, 31, 0x11FC88u);
    ctx->pc = 0x11FC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC80u;
    // 0x11fc84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBE8u, 0x11FC80u, 0x11FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC88u;
label_11fc88:
    // 0x11fc88: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x11fc88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11fc8c: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x11fc8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fc90: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x11fc90u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x11fc94: 0x624826  xor         $t1, $v1, $v0
    ctx->pc = 0x11fc94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x11fc98: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x11fc98u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x11fc9c: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x11fc9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x11fca0: 0x95103  sra         $t2, $t1, 4
    ctx->pc = 0x11fca0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 9), 4));
    // 0x11fca4: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x11fca4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x11fca8: 0x3122000f  andi        $v0, $t1, 0xF
    ctx->pc = 0x11fca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x11fcac: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x11fcacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x11fcb0: 0x4a4026  xor         $t0, $v0, $t2
    ctx->pc = 0x11fcb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x11fcb4: 0xc41826  xor         $v1, $a2, $a0
    ctx->pc = 0x11fcb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 4));
    // 0x11fcb8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FCB8u;
    {
        const bool branch_taken_0x11fcb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCB8u;
        // 0x11fcbc: 0x653826  xor         $a3, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcb8) {
            ctx->pc = 0x11FCD0u;
            goto label_11fcd0;
        }
    }
    ctx->pc = 0x11FCC0u;
    // 0x11fcc0: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FCC0u;
    {
        const bool branch_taken_0x11fcc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCC0u;
        // 0x11fcc4: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcc0) {
            ctx->pc = 0x11FCD4u;
            goto label_11fcd4;
        }
    }
    ctx->pc = 0x11FCC8u;
    // 0x11fcc8: 0x11200028  beqz        $t1, . + 4 + (0x28 << 2)
    ctx->pc = 0x11FCC8u;
    {
        const bool branch_taken_0x11fcc8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCC8u;
        // 0x11fccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcc8) {
            ctx->pc = 0x11FD6Cu;
            goto label_11fd6c;
        }
    }
    ctx->pc = 0x11FCD0u;
label_11fcd0:
    // 0x11fcd0: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x11fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_11fcd4:
    // 0x11fcd4: 0x14e2000c  bne         $a3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11FCD4u;
    {
        const bool branch_taken_0x11fcd4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCD4u;
        // 0x11fcd8: 0x82843  sra         $a1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcd4) {
            ctx->pc = 0x11FD08u;
            goto label_11fd08;
        }
    }
    ctx->pc = 0x11FCDCu;
    // 0x11fcdc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x11fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11fce0: 0x1502000a  bne         $t0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11FCE0u;
    {
        const bool branch_taken_0x11fce0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCE0u;
        // 0x11fce4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fce0) {
            ctx->pc = 0x11FD0Cu;
            goto label_11fd0c;
        }
    }
    ctx->pc = 0x11FCE8u;
    // 0x11fce8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x11fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x11fcec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11fcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fcf0: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x11fcf0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11fcf4: 0x1442004  sllv        $a0, $a0, $t2
    ctx->pc = 0x11fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 10) & 0x1F));
    // 0x11fcf8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11fcfc: 0xa42826  xor         $a1, $a1, $a0
    ctx->pc = 0x11fcfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x11fd00: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11FD00u;
    {
        const bool branch_taken_0x11fd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD00u;
        // 0x11fd04: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd00) {
            ctx->pc = 0x11FD6Cu;
            goto label_11fd6c;
        }
    }
    ctx->pc = 0x11FD08u;
label_11fd08:
    // 0x11fd08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11fd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11fd0c:
    // 0x11fd0c: 0x31060001  andi        $a2, $t0, 0x1
    ctx->pc = 0x11fd0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x11fd10: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x11fd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11fd14: 0x0  nop
    ctx->pc = 0x11fd14u;
    // NOP
label_11fd18:
    // 0x11fd18: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x11fd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x11fd1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11fd20: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11fd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11fd24: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x11fd24u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x11fd28: 0x0  nop
    ctx->pc = 0x11fd28u;
    // NOP
    // 0x11fd2c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11FD2Cu;
    {
        const bool branch_taken_0x11fd2c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x11fd2c) {
            ctx->pc = 0x11FD18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11fd18;
        }
    }
    ctx->pc = 0x11FD34u;
    // 0x11fd34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11FD34u;
    {
        const bool branch_taken_0x11fd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD34u;
        // 0x11fd38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd34) {
            ctx->pc = 0x11FD48u;
            goto label_11fd48;
        }
    }
    ctx->pc = 0x11FD3Cu;
    // 0x11fd3c: 0x0  nop
    ctx->pc = 0x11fd3cu;
    // NOP
label_11fd40:
    // 0x11fd40: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x11fd40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x11fd44: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x11fd44u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_11fd48:
    // 0x11fd48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11fd4c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x11fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11fd50: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x11fd50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x11fd54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11FD54u;
    {
        const bool branch_taken_0x11fd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fd54) {
            ctx->pc = 0x11FD40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11fd40;
        }
    }
    ctx->pc = 0x11FD5Cu;
    // 0x11fd5c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x11fd5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x11fd60: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x11fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x11fd64: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x11fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x11fd68: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x11fd68u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_11fd6c:
    // 0x11fd6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11fd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11fd70: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11fd70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11fd74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11fd74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fd78: 0x3e00008  jr          $ra
    ctx->pc = 0x11FD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD78u;
        // 0x11fd7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FD80u;
}
