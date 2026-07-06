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

// Function: sub_001AAF28
// Address: 0x1aaf28 - 0x1ab180
void sub_001AAF28_0x1aaf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAF28_0x1aaf28");
#endif

    switch (ctx->pc) {
        case 0x1aaf6cu: goto label_1aaf6c;
        case 0x1aafa0u: goto label_1aafa0;
        case 0x1ab000u: goto label_1ab000;
        case 0x1ab060u: goto label_1ab060;
        case 0x1ab114u: goto label_1ab114;
        case 0x1ab130u: goto label_1ab130;
        case 0x1ab170u: goto label_1ab170;
        default: break;
    }

    ctx->pc = 0x1aaf28u;

label_1aaf28:
    // 0x1aaf28: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aaf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1aaf2c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aaf2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aaf30: 0x8c43e684  lw          $v1, -0x197C($v0)
    ctx->pc = 0x1aaf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960772)));
    // 0x1aaf34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aaf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aaf38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1aaf38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aaf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aaf40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aaf40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aaf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aaf48: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1aaf48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1aaf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1aaf50: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1aaf50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf54: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1aaf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1aaf58: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1aaf58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf5c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAF5Cu;
    {
        const bool branch_taken_0x1aaf5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF5Cu;
        // 0x1aaf60: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf5c) {
            ctx->pc = 0x1AAF6Cu;
            goto label_1aaf6c;
        }
    }
    ctx->pc = 0x1AAF64u;
    // 0x1aaf64: 0xc06abba  jal         func_1AAEE8
    ctx->pc = 0x1AAF64u;
    SET_GPR_U32(ctx, 31, 0x1AAF6Cu);
    ctx->pc = 0x1AAEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAEE8u, 0x1AAF64u, 0x1AAF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF6Cu;
label_1aaf6c:
    // 0x1aaf6c: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x1aaf6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1aaf70: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x1aaf70u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1aaf74: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAF74u;
    {
        const bool branch_taken_0x1aaf74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF74u;
        // 0x1aaf78: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf74) {
            ctx->pc = 0x1AAF84u;
            goto label_1aaf84;
        }
    }
    ctx->pc = 0x1AAF7Cu;
    // 0x1aaf7c: 0x1a00004f  blez        $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1AAF7Cu;
    {
        const bool branch_taken_0x1aaf7c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1AAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF7Cu;
        // 0x1aaf80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf7c) {
            ctx->pc = 0x1AB0BCu;
            goto label_1ab0bc;
        }
    }
    ctx->pc = 0x1AAF84u;
label_1aaf84:
    // 0x1aaf84: 0x3c0b003e  lui         $t3, 0x3E
    ctx->pc = 0x1aaf84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)62 << 16));
    // 0x1aaf88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aaf88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf8c: 0x25626a88  addiu       $v0, $t3, 0x6A88
    ctx->pc = 0x1aaf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 27272));
    // 0x1aaf90: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AAF90u;
    {
        const bool branch_taken_0x1aaf90 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1AAF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF90u;
        // 0x1aaf94: 0x844a0200  lh          $t2, 0x200($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf90) {
            ctx->pc = 0x1AAFF4u;
            goto label_1aaff4;
        }
    }
    ctx->pc = 0x1AAF98u;
    // 0x1aaf98: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1aaf98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf9c: 0x0  nop
    ctx->pc = 0x1aaf9cu;
    // NOP
label_1aafa0:
    // 0x1aafa0: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x1aafa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1aafa4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1aafa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1aafa8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1aafa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aafac: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x1aafacu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1aafb0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aafb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1aafb4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1aafb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1aafb8: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x1aafb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1aafbc: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x1aafbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1aafc0: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x1aafc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1aafc4: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1aafc4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1aafc8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1aafc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aafcc: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x1aafccu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1aafd0: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1aafd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1aafd4: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1aafd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1aafd8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1aafd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aafdc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1aafdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1aafe0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1aafe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1aafe4: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1AAFE4u;
    {
        const bool branch_taken_0x1aafe4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFE4u;
        // 0x1aafe8: 0x846a0000  lh          $t2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafe4) {
            ctx->pc = 0x1AAFA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aafa0;
        }
    }
    ctx->pc = 0x1AAFECu;
    // 0x1aafec: 0x25626a88  addiu       $v0, $t3, 0x6A88
    ctx->pc = 0x1aafecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 27272));
    // 0x1aaff0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aaff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaff4:
    // 0x1aaff4: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AAFF4u;
    {
        const bool branch_taken_0x1aaff4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1AAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFF4u;
        // 0x1aaff8: 0x84480400  lh          $t0, 0x400($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaff4) {
            ctx->pc = 0x1AB04Cu;
            goto label_1ab04c;
        }
    }
    ctx->pc = 0x1AAFFCu;
    // 0x1aaffc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1aaffcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab000:
    // 0x1ab000: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x1ab000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1ab004: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ab004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ab008: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1ab008u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ab00c: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x1ab00cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1ab010: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ab010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ab014: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1ab014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1ab018: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x1ab018u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1ab01c: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x1ab01cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ab020: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x1ab020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1ab024: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1ab024u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ab028: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ab028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab02c: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x1ab02cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1ab030: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1ab030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1ab034: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1ab034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1ab038: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ab038u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ab03c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ab03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ab040: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1ab040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1ab044: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1AB044u;
    {
        const bool branch_taken_0x1ab044 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB044u;
        // 0x1ab048: 0x84680000  lh          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab044) {
            ctx->pc = 0x1AB000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ab000;
        }
    }
    ctx->pc = 0x1AB04Cu;
label_1ab04c:
    // 0x1ab04c: 0x25626a88  addiu       $v0, $t3, 0x6A88
    ctx->pc = 0x1ab04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 27272));
    // 0x1ab050: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ab050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab054: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AB054u;
    {
        const bool branch_taken_0x1ab054 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1AB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB054u;
        // 0x1ab058: 0x84440600  lh          $a0, 0x600($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab054) {
            ctx->pc = 0x1AB0ACu;
            goto label_1ab0ac;
        }
    }
    ctx->pc = 0x1AB05Cu;
    // 0x1ab05c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1ab05cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab060:
    // 0x1ab060: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x1ab060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1ab064: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ab064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ab068: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1ab068u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ab06c: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x1ab06cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1ab070: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ab070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ab074: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1ab074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1ab078: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x1ab078u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1ab07c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1ab07cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ab080: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1ab080u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ab084: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x1ab084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1ab088: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ab088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab08c: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x1ab08cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1ab090: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1ab090u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1ab094: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1ab094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1ab098: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ab098u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ab09c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ab09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ab0a0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1ab0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1ab0a4: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1AB0A4u;
    {
        const bool branch_taken_0x1ab0a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0A4u;
        // 0x1ab0a8: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab0a4) {
            ctx->pc = 0x1AB060u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ab060;
        }
    }
    ctx->pc = 0x1AB0ACu;
label_1ab0ac:
    // 0x1ab0ac: 0xa64a0000  sh          $t2, 0x0($s2)
    ctx->pc = 0x1ab0acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x1ab0b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab0b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0b4: 0xa6680000  sh          $t0, 0x0($s3)
    ctx->pc = 0x1ab0b4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1ab0b8: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x1ab0b8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
label_1ab0bc:
    // 0x1ab0bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab0c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab0c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab0c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ab0c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab0c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ab0c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab0cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ab0ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab0d0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ab0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ab0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0D4u;
        // 0x1ab0d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB0DCu;
    // 0x1ab0dc: 0x0  nop
    ctx->pc = 0x1ab0dcu;
    // NOP
    // 0x1ab0e0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ab0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1ab0e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab0e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ab0e8: 0x8c43e684  lw          $v1, -0x197C($v0)
    ctx->pc = 0x1ab0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960772)));
    // 0x1ab0ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab0f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ab0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ab0f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ab0f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ab0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ab100: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ab100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab104: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB104u;
    {
        const bool branch_taken_0x1ab104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB104u;
        // 0x1ab108: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab104) {
            ctx->pc = 0x1AB114u;
            goto label_1ab114;
        }
    }
    ctx->pc = 0x1AB10Cu;
    // 0x1ab10c: 0xc06abba  jal         func_1AAEE8
    ctx->pc = 0x1AB10Cu;
    SET_GPR_U32(ctx, 31, 0x1AB114u);
    ctx->pc = 0x1AAEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAEE8u, 0x1AB10Cu, 0x1AB114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB114u;
label_1ab114:
    // 0x1ab114: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1ab114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1ab118: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ab118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab11c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ab11cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab120: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1ab120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab124: 0x24847288  addiu       $a0, $a0, 0x7288
    ctx->pc = 0x1ab124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29320));
    // 0x1ab128: 0xc06abca  jal         func_1AAF28
    ctx->pc = 0x1AB128u;
    SET_GPR_U32(ctx, 31, 0x1AB130u);
    ctx->pc = 0x1AB12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB128u;
    // 0x1ab12c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAF28u;
    goto label_1aaf28;
    ctx->pc = 0x1AB130u;
label_1ab130:
    // 0x1ab130: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab138: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab13c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ab13cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab140: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ab140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab144: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB144u;
        // 0x1ab148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB14Cu;
    // 0x1ab14c: 0x0  nop
    ctx->pc = 0x1ab14cu;
    // NOP
    // 0x1ab150: 0x94a70000  lhu         $a3, 0x0($a1)
    ctx->pc = 0x1ab150u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ab154: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab158: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x1ab158u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ab15c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x1ab15cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ab160: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x1ab160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ab164: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ab164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ab168: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB168u;
        // 0x1ab16c: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB170u;
label_1ab170:
    // 0x1ab170: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ab170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1ab174: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB174u;
        // 0x1ab178: 0xac44e6a4  sw          $a0, -0x195C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960804), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB17Cu;
    // 0x1ab17c: 0x0  nop
    ctx->pc = 0x1ab17cu;
    // NOP
    if (ctx->pc == 0x1ab17cu) { ctx->pc = 0x1ab180u; }
}
