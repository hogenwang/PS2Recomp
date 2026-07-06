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

// Function: sub_001EFD90
// Address: 0x1efd90 - 0x1efed8
void sub_001EFD90_0x1efd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFD90_0x1efd90");
#endif

    switch (ctx->pc) {
        case 0x1efe20u: goto label_1efe20;
        case 0x1efe50u: goto label_1efe50;
        case 0x1efe98u: goto label_1efe98;
        default: break;
    }

    ctx->pc = 0x1efd90u;

    // 0x1efd90: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x1efd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1efd94: 0x24a5001e  addiu       $a1, $a1, 0x1E
    ctx->pc = 0x1efd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
    // 0x1efd98: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1efd98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1efd9c: 0x24ca000f  addiu       $t2, $a2, 0xF
    ctx->pc = 0x1efd9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x1efda0: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1efda0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1efda4: 0x294b0000  slti        $t3, $t2, 0x0
    ctx->pc = 0x1efda4u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1efda8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1efda8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1efdac: 0x24c6001e  addiu       $a2, $a2, 0x1E
    ctx->pc = 0x1efdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30));
    // 0x1efdb0: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1efdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1efdb4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1efdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1efdb8: 0x24a8003f  addiu       $t0, $a1, 0x3F
    ctx->pc = 0x1efdb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x1efdbc: 0x24a5007e  addiu       $a1, $a1, 0x7E
    ctx->pc = 0x1efdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 126));
    // 0x1efdc0: 0x2449003f  addiu       $t1, $v0, 0x3F
    ctx->pc = 0x1efdc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1efdc4: 0x2442007e  addiu       $v0, $v0, 0x7E
    ctx->pc = 0x1efdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 126));
    // 0x1efdc8: 0x29030000  slti        $v1, $t0, 0x0
    ctx->pc = 0x1efdc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1efdcc: 0xcb500b  movn        $t2, $a2, $t3
    ctx->pc = 0x1efdccu;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 6));
    // 0x1efdd0: 0xa3400b  movn        $t0, $a1, $v1
    ctx->pc = 0x1efdd0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x1efdd4: 0x29230000  slti        $v1, $t1, 0x0
    ctx->pc = 0x1efdd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1efdd8: 0x43480b  movn        $t1, $v0, $v1
    ctx->pc = 0x1efdd8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
    // 0x1efddc: 0x84183  sra         $t0, $t0, 6
    ctx->pc = 0x1efddcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 6));
    // 0x1efde0: 0xa5103  sra         $t2, $t2, 4
    ctx->pc = 0x1efde0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 4));
    // 0x1efde4: 0x94983  sra         $t1, $t1, 6
    ctx->pc = 0x1efde4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 6));
    // 0x1efde8: 0x10a1018  mult        $v0, $t0, $t2
    ctx->pc = 0x1efde8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1efdec: 0x712a5018  mult1       $t2, $t1, $t2
    ctx->pc = 0x1efdecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1efdf0: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x1efdf0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x1efdf4: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1efdf4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1efdf8: 0xa4e8000e  sh          $t0, 0xE($a3)
    ctx->pc = 0x1efdf8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 8));
    // 0x1efdfc: 0xa4e9000c  sh          $t1, 0xC($a3)
    ctx->pc = 0x1efdfcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 9));
    // 0x1efe00: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1efe00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1efe04: 0xa5240  sll         $t2, $t2, 9
    ctx->pc = 0x1efe04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 9));
    // 0x1efe08: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1efe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1efe0c: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x1efe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x1efe10: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x1efe10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1efe14: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1efe14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1efe18: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE18u;
        // 0x1efe1c: 0xacea0004  sw          $t2, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFE20u;
label_1efe20:
    // 0x1efe20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1efe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1efe24: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1efe24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1efe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1efe2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1efe2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1efe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1efe34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1efe34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1efe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1efe3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1efe3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe40: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EFE40u;
    {
        const bool branch_taken_0x1efe40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE40u;
        // 0x1efe44: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe40) {
            ctx->pc = 0x1EFE80u;
            goto label_1efe80;
        }
    }
    ctx->pc = 0x1EFE48u;
    // 0x1efe48: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1EFE48u;
    SET_GPR_U32(ctx, 31, 0x1EFE50u);
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1EFE48u, 0x1EFE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFE50u;
label_1efe50:
    // 0x1efe50: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1efe50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1efe54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFE54u;
    {
        const bool branch_taken_0x1efe54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE54u;
        // 0x1efe58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe54) {
            ctx->pc = 0x1EFE78u;
            goto label_1efe78;
        }
    }
    ctx->pc = 0x1EFE5Cu;
    // 0x1efe5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1efe5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efe60: 0x34a50181  ori         $a1, $a1, 0x181
    ctx->pc = 0x1efe60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)385);
    // 0x1efe64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1efe64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1efe68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1efe68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efe6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1efe6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1efe70: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EFE70u;
    ctx->pc = 0x1EFE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFE70u;
    // 0x1efe74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1EFE78u;
label_1efe78:
    // 0x1efe78: 0x8e022018  lw          $v0, 0x2018($s0)
    ctx->pc = 0x1efe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8216)));
    // 0x1efe7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1efe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1efe80:
    // 0x1efe80: 0x3a220005  xori        $v0, $s1, 0x5
    ctx->pc = 0x1efe80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)5);
    // 0x1efe84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1efe84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe88: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1efe88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1efe8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe90: 0xc077080  jal         func_1DC200
    ctx->pc = 0x1EFE90u;
    SET_GPR_U32(ctx, 31, 0x1EFE98u);
    ctx->pc = 0x1EFE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFE90u;
    // 0x1efe94: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC200u, 0x1EFE90u, 0x1EFE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFE98u;
label_1efe98:
    // 0x1efe98: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1efe98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1efe9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFE9Cu;
    {
        const bool branch_taken_0x1efe9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE9Cu;
        // 0x1efea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe9c) {
            ctx->pc = 0x1EFEC0u;
            goto label_1efec0;
        }
    }
    ctx->pc = 0x1EFEA4u;
    // 0x1efea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1efea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efea8: 0x34a50f12  ori         $a1, $a1, 0xF12
    ctx->pc = 0x1efea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3858);
    // 0x1efeac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1efeacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1efeb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1efeb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efeb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1efeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1efeb8: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EFEB8u;
    ctx->pc = 0x1EFEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFEB8u;
    // 0x1efebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1EFEC0u;
label_1efec0:
    // 0x1efec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1efec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efec4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1efec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1efec8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1efec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efecc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1efeccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1efed0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFED0u;
        // 0x1efed4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFED8u;
}
