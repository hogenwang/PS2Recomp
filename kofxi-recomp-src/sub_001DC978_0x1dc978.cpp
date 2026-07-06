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

// Function: sub_001DC978
// Address: 0x1dc978 - 0x1dcba0
void sub_001DC978_0x1dc978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC978_0x1dc978");
#endif

    switch (ctx->pc) {
        case 0x1dc9bcu: goto label_1dc9bc;
        case 0x1dc9f0u: goto label_1dc9f0;
        case 0x1dca50u: goto label_1dca50;
        case 0x1dcab0u: goto label_1dcab0;
        case 0x1dcb64u: goto label_1dcb64;
        case 0x1dcb80u: goto label_1dcb80;
        default: break;
    }

    ctx->pc = 0x1dc978u;

label_1dc978:
    // 0x1dc978: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1dc978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1dc97c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dc97cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dc980: 0x8c43ead8  lw          $v1, -0x1528($v0)
    ctx->pc = 0x1dc980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961880)));
    // 0x1dc984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc988: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dc988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc98c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dc98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dc990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dc990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc994: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dc994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dc998: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1dc998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc99c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dc99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dc9a0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1dc9a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc9a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dc9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dc9a8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1dc9a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc9ac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC9ACu;
    {
        const bool branch_taken_0x1dc9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9ACu;
        // 0x1dc9b0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9ac) {
            ctx->pc = 0x1DC9BCu;
            goto label_1dc9bc;
        }
    }
    ctx->pc = 0x1DC9B4u;
    // 0x1dc9b4: 0xc07724e  jal         func_1DC938
    ctx->pc = 0x1DC9B4u;
    SET_GPR_U32(ctx, 31, 0x1DC9BCu);
    ctx->pc = 0x1DC938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC938u, 0x1DC9B4u, 0x1DC9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC9BCu;
label_1dc9bc:
    // 0x1dc9bc: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x1dc9bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dc9c0: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x1dc9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dc9c4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC9C4u;
    {
        const bool branch_taken_0x1dc9c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9C4u;
        // 0x1dc9c8: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9c4) {
            ctx->pc = 0x1DC9D4u;
            goto label_1dc9d4;
        }
    }
    ctx->pc = 0x1DC9CCu;
    // 0x1dc9cc: 0x1a00004f  blez        $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1DC9CCu;
    {
        const bool branch_taken_0x1dc9cc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1DC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9CCu;
        // 0x1dc9d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9cc) {
            ctx->pc = 0x1DCB0Cu;
            goto label_1dcb0c;
        }
    }
    ctx->pc = 0x1DC9D4u;
label_1dc9d4:
    // 0x1dc9d4: 0x3c0b003e  lui         $t3, 0x3E
    ctx->pc = 0x1dc9d4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)62 << 16));
    // 0x1dc9d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc9d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc9dc: 0x25626a88  addiu       $v0, $t3, 0x6A88
    ctx->pc = 0x1dc9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 27272));
    // 0x1dc9e0: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DC9E0u;
    {
        const bool branch_taken_0x1dc9e0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1DC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9E0u;
        // 0x1dc9e4: 0x844a0200  lh          $t2, 0x200($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9e0) {
            ctx->pc = 0x1DCA44u;
            goto label_1dca44;
        }
    }
    ctx->pc = 0x1DC9E8u;
    // 0x1dc9e8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1dc9e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc9ec: 0x0  nop
    ctx->pc = 0x1dc9ecu;
    // NOP
label_1dc9f0:
    // 0x1dc9f0: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x1dc9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1dc9f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1dc9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1dc9f8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1dc9f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dc9fc: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x1dc9fcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1dca00: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1dca00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1dca04: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1dca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1dca08: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x1dca08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1dca0c: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x1dca0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1dca10: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x1dca10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1dca14: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1dca14u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dca18: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1dca18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca1c: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x1dca1cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1dca20: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1dca20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1dca24: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1dca24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1dca28: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1dca28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dca2c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1dca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dca30: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1dca30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1dca34: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1DCA34u;
    {
        const bool branch_taken_0x1dca34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA34u;
        // 0x1dca38: 0x846a0000  lh          $t2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca34) {
            ctx->pc = 0x1DC9F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dc9f0;
        }
    }
    ctx->pc = 0x1DCA3Cu;
    // 0x1dca3c: 0x25626a88  addiu       $v0, $t3, 0x6A88
    ctx->pc = 0x1dca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 27272));
    // 0x1dca40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dca40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dca44:
    // 0x1dca44: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DCA44u;
    {
        const bool branch_taken_0x1dca44 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1DCA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA44u;
        // 0x1dca48: 0x84480400  lh          $t0, 0x400($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca44) {
            ctx->pc = 0x1DCA9Cu;
            goto label_1dca9c;
        }
    }
    ctx->pc = 0x1DCA4Cu;
    // 0x1dca4c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1dca4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dca50:
    // 0x1dca50: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x1dca50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1dca54: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1dca54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1dca58: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1dca58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dca5c: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x1dca5cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1dca60: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1dca60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1dca64: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1dca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1dca68: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x1dca68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1dca6c: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x1dca6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1dca70: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x1dca70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1dca74: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1dca74u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dca78: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1dca78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca7c: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x1dca7cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1dca80: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1dca80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1dca84: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1dca84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1dca88: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1dca88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dca8c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1dca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dca90: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1dca90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1dca94: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1DCA94u;
    {
        const bool branch_taken_0x1dca94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA94u;
        // 0x1dca98: 0x84680000  lh          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca94) {
            ctx->pc = 0x1DCA50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dca50;
        }
    }
    ctx->pc = 0x1DCA9Cu;
label_1dca9c:
    // 0x1dca9c: 0x25626a88  addiu       $v0, $t3, 0x6A88
    ctx->pc = 0x1dca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 27272));
    // 0x1dcaa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dcaa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcaa4: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DCAA4u;
    {
        const bool branch_taken_0x1dcaa4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1DCAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAA4u;
        // 0x1dcaa8: 0x84440600  lh          $a0, 0x600($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcaa4) {
            ctx->pc = 0x1DCAFCu;
            goto label_1dcafc;
        }
    }
    ctx->pc = 0x1DCAACu;
    // 0x1dcaac: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1dcaacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dcab0:
    // 0x1dcab0: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x1dcab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1dcab4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1dcab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1dcab8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1dcab8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dcabc: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x1dcabcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1dcac0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1dcac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1dcac4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1dcac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1dcac8: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x1dcac8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1dcacc: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1dcaccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1dcad0: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1dcad0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dcad4: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x1dcad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1dcad8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1dcad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcadc: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x1dcadcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1dcae0: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1dcae0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1dcae4: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1dcae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1dcae8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1dcae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dcaec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1dcaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dcaf0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1dcaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1dcaf4: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1DCAF4u;
    {
        const bool branch_taken_0x1dcaf4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAF4u;
        // 0x1dcaf8: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcaf4) {
            ctx->pc = 0x1DCAB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dcab0;
        }
    }
    ctx->pc = 0x1DCAFCu;
label_1dcafc:
    // 0x1dcafc: 0xa64a0000  sh          $t2, 0x0($s2)
    ctx->pc = 0x1dcafcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x1dcb00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dcb00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb04: 0xa6680000  sh          $t0, 0x0($s3)
    ctx->pc = 0x1dcb04u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1dcb08: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x1dcb08u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
label_1dcb0c:
    // 0x1dcb0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcb10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dcb10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcb14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dcb14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcb18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dcb18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dcb1c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dcb1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dcb20: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dcb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dcb24: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB24u;
        // 0x1dcb28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCB2Cu;
    // 0x1dcb2c: 0x0  nop
    ctx->pc = 0x1dcb2cu;
    // NOP
    // 0x1dcb30: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1dcb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1dcb34: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcb34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dcb38: 0x8c43ead8  lw          $v1, -0x1528($v0)
    ctx->pc = 0x1dcb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961880)));
    // 0x1dcb3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcb40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dcb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dcb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dcb48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dcb48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dcb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dcb50: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1dcb50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb54: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCB54u;
    {
        const bool branch_taken_0x1dcb54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB54u;
        // 0x1dcb58: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb54) {
            ctx->pc = 0x1DCB64u;
            goto label_1dcb64;
        }
    }
    ctx->pc = 0x1DCB5Cu;
    // 0x1dcb5c: 0xc07724e  jal         func_1DC938
    ctx->pc = 0x1DCB5Cu;
    SET_GPR_U32(ctx, 31, 0x1DCB64u);
    ctx->pc = 0x1DC938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC938u, 0x1DCB5Cu, 0x1DCB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB64u;
label_1dcb64:
    // 0x1dcb64: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1dcb64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1dcb68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dcb68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dcb6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb70: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1dcb70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb74: 0x2484c310  addiu       $a0, $a0, -0x3CF0
    ctx->pc = 0x1dcb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951696));
    // 0x1dcb78: 0xc07725e  jal         func_1DC978
    ctx->pc = 0x1DCB78u;
    SET_GPR_U32(ctx, 31, 0x1DCB80u);
    ctx->pc = 0x1DCB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCB78u;
    // 0x1dcb7c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC978u;
    goto label_1dc978;
    ctx->pc = 0x1DCB80u;
label_1dcb80:
    // 0x1dcb80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dcb80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcb84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcb88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dcb88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcb8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dcb8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcb90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dcb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dcb94: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB94u;
        // 0x1dcb98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCB9Cu;
    // 0x1dcb9c: 0x0  nop
    ctx->pc = 0x1dcb9cu;
    // NOP
}
