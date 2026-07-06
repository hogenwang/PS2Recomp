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

// Function: sub_00258E20
// Address: 0x258e20 - 0x259060
void sub_00258E20_0x258e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258E20_0x258e20");
#endif

    switch (ctx->pc) {
        case 0x258e60u: goto label_258e60;
        case 0x258fbcu: goto label_258fbc;
        case 0x258fc4u: goto label_258fc4;
        case 0x258fdcu: goto label_258fdc;
        case 0x259024u: goto label_259024;
        case 0x259030u: goto label_259030;
        default: break;
    }

    ctx->pc = 0x258e20u;

    // 0x258e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258e24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x258e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x258e28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x258e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x258e2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x258e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x258e30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x258e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e34: 0x960200a0  lhu         $v0, 0xA0($s0)
    ctx->pc = 0x258e34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x258e38: 0x860300a2  lh          $v1, 0xA2($s0)
    ctx->pc = 0x258e38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 162)));
    // 0x258e3c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x258e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x258e40: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x258e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x258e44: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x258e44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x258e48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x258e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258e4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258E4Cu;
    {
        const bool branch_taken_0x258e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E4Cu;
        // 0x258e50: 0x288c3  sra         $s1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e4c) {
            ctx->pc = 0x258E60u;
            goto label_258e60;
        }
    }
    ctx->pc = 0x258E54u;
    // 0x258e54: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x258e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x258e58: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x258E58u;
    SET_GPR_U32(ctx, 31, 0x258E60u);
    ctx->pc = 0x258E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258E58u;
    // 0x258e5c: 0x24846fa8  addiu       $a0, $a0, 0x6FA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x258E58u, 0x258E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E60u;
label_258e60:
    // 0x258e60: 0x9606001a  lhu         $a2, 0x1A($s0)
    ctx->pc = 0x258e60u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x258e64: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x258e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x258e68: 0x860500a4  lh          $a1, 0xA4($s0)
    ctx->pc = 0x258e68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x258e6c: 0x24631548  addiu       $v1, $v1, 0x1548
    ctx->pc = 0x258e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5448));
    // 0x258e70: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x258e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x258e74: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x258e74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x258e78: 0x225202a  slt         $a0, $s1, $a1
    ctx->pc = 0x258e78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x258e7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x258e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258e80: 0xa4880b  movn        $s1, $a1, $a0
    ctx->pc = 0x258e80u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
    // 0x258e84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x258e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258e88: 0x2232818  mult        $a1, $s1, $v1
    ctx->pc = 0x258e88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x258e8c: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x258e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x258e90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258E90u;
    {
        const bool branch_taken_0x258e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E90u;
        // 0x258e94: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e90) {
            ctx->pc = 0x258EA0u;
            goto label_258ea0;
        }
    }
    ctx->pc = 0x258E98u;
    // 0x258e98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x258E98u;
    {
        const bool branch_taken_0x258e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E98u;
        // 0x258e9c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e98) {
            ctx->pc = 0x258EACu;
            goto label_258eac;
        }
    }
    ctx->pc = 0x258EA0u;
label_258ea0:
    // 0x258ea0: 0x28a30079  slti        $v1, $a1, 0x79
    ctx->pc = 0x258ea0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x258ea4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x258ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x258ea8: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x258ea8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_258eac:
    // 0x258eac: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x258eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x258eb0: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x258eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x258eb4: 0x8c44f990  lw          $a0, -0x670($v0)
    ctx->pc = 0x258eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965648)));
    // 0x258eb8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x258eb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x258ebc: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x258ebcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x258ec0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x258ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x258ec4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x258EC4u;
    {
        const bool branch_taken_0x258ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258EC4u;
        // 0x258ec8: 0xae04000c  sw          $a0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ec4) {
            ctx->pc = 0x258ED4u;
            goto label_258ed4;
        }
    }
    ctx->pc = 0x258ECCu;
    // 0x258ecc: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x258eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x258ed0: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x258ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
label_258ed4:
    // 0x258ed4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x258ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258ed8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x258ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258edc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x258edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x258EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258EE0u;
        // 0x258ee4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258EE8u;
    // 0x258ee8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x258ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x258eec: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x258eecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x258ef0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x258ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x258ef4: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x258ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x258ef8: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x258ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x258efc: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x258efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x258f00: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x258f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x258f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258f08: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x258f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x258f0c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x258f0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x258f10: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x258f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x258f14: 0x3c09003a  lui         $t1, 0x3A
    ctx->pc = 0x258f14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)58 << 16));
    // 0x258f18: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x258f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x258f1c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x258f1cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x258f20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x258f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x258f24: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x258f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x258f28: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x258f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x258f2c: 0x3c0b003a  lui         $t3, 0x3A
    ctx->pc = 0x258f2cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)58 << 16));
    // 0x258f30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x258f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x258f34: 0x3c0c003a  lui         $t4, 0x3A
    ctx->pc = 0x258f34u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)58 << 16));
    // 0x258f38: 0x3c0d003a  lui         $t5, 0x3A
    ctx->pc = 0x258f38u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)58 << 16));
    // 0x258f3c: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x258f3cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x258f40: 0xace512a0  sw          $a1, 0x12A0($a3)
    ctx->pc = 0x258f40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4768), GPR_U32(ctx, 5));
    // 0x258f44: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x258f44u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x258f48: 0xad0612a8  sw          $a2, 0x12A8($t0)
    ctx->pc = 0x258f48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4776), GPR_U32(ctx, 6));
    // 0x258f4c: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x258f4cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    // 0x258f50: 0x3c17003a  lui         $s7, 0x3A
    ctx->pc = 0x258f50u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
    // 0x258f54: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x258f54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x258f58: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x258f58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x258f5c: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x258f5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x258f60: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x258f60u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x258f64: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x258f64u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x258f68: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x258f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x258f6c: 0xad2a12ac  sw          $t2, 0x12AC($t1)
    ctx->pc = 0x258f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4780), GPR_U32(ctx, 10));
    // 0x258f70: 0x24841308  addiu       $a0, $a0, 0x1308
    ctx->pc = 0x258f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x258f74: 0xac6212c8  sw          $v0, 0x12C8($v1)
    ctx->pc = 0x258f74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4808), GPR_U32(ctx, 2));
    // 0x258f78: 0xaeaa1210  sw          $t2, 0x1210($s5)
    ctx->pc = 0x258f78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4624), GPR_U32(ctx, 10));
    // 0x258f7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x258f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258f80: 0xaec01214  sw          $zero, 0x1214($s6)
    ctx->pc = 0x258f80u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4628), GPR_U32(ctx, 0));
    // 0x258f84: 0xaee0129c  sw          $zero, 0x129C($s7)
    ctx->pc = 0x258f84u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4764), GPR_U32(ctx, 0));
    // 0x258f88: 0xade212b0  sw          $v0, 0x12B0($t7)
    ctx->pc = 0x258f88u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4784), GPR_U32(ctx, 2));
    // 0x258f8c: 0xae0212b4  sw          $v0, 0x12B4($s0)
    ctx->pc = 0x258f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4788), GPR_U32(ctx, 2));
    // 0x258f90: 0xae2212b8  sw          $v0, 0x12B8($s1)
    ctx->pc = 0x258f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4792), GPR_U32(ctx, 2));
    // 0x258f94: 0xae4212bc  sw          $v0, 0x12BC($s2)
    ctx->pc = 0x258f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4796), GPR_U32(ctx, 2));
    // 0x258f98: 0xae6012c0  sw          $zero, 0x12C0($s3)
    ctx->pc = 0x258f98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4800), GPR_U32(ctx, 0));
    // 0x258f9c: 0xae8012c4  sw          $zero, 0x12C4($s4)
    ctx->pc = 0x258f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4804), GPR_U32(ctx, 0));
    // 0x258fa0: 0xad6012cc  sw          $zero, 0x12CC($t3)
    ctx->pc = 0x258fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4812), GPR_U32(ctx, 0));
    // 0x258fa4: 0xad8012d0  sw          $zero, 0x12D0($t4)
    ctx->pc = 0x258fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4816), GPR_U32(ctx, 0));
    // 0x258fa8: 0xada012d4  sw          $zero, 0x12D4($t5)
    ctx->pc = 0x258fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4820), GPR_U32(ctx, 0));
    // 0x258fac: 0xadc01528  sw          $zero, 0x1528($t6)
    ctx->pc = 0x258facu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 5416), GPR_U32(ctx, 0));
    // 0x258fb0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x258fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x258fb4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x258FB4u;
    SET_GPR_U32(ctx, 31, 0x258FBCu);
    ctx->pc = 0x258FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258FB4u;
    // 0x258fb8: 0x24060220  addiu       $a2, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x258FB4u, 0x258FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258FBCu;
label_258fbc:
    // 0x258fbc: 0xc096bbe  jal         func_25AEF8
    ctx->pc = 0x258FBCu;
    SET_GPR_U32(ctx, 31, 0x258FC4u);
    ctx->pc = 0x25AEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AEF8u, 0x258FBCu, 0x258FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258FC4u;
label_258fc4:
    // 0x258fc4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x258fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x258fc8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x258fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x258fcc: 0x8c4512d8  lw          $a1, 0x12D8($v0)
    ctx->pc = 0x258fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4824)));
    // 0x258fd0: 0x248412e0  addiu       $a0, $a0, 0x12E0
    ctx->pc = 0x258fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4832));
    // 0x258fd4: 0xc092e30  jal         func_24B8C0
    ctx->pc = 0x258FD4u;
    SET_GPR_U32(ctx, 31, 0x258FDCu);
    ctx->pc = 0x258FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258FD4u;
    // 0x258fd8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B8C0u, 0x258FD4u, 0x258FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258FDCu;
label_258fdc:
    // 0x258fdc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x258fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x258fe0: 0xac401588  sw          $zero, 0x1588($v0)
    ctx->pc = 0x258fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5512), GPR_U32(ctx, 0));
    // 0x258fe4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x258fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x258fe8: 0x8c62f9ec  lw          $v0, -0x614($v1)
    ctx->pc = 0x258fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965740)));
    // 0x258fec: 0x28420028  slti        $v0, $v0, 0x28
    ctx->pc = 0x258fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x258ff0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258FF0u;
    {
        const bool branch_taken_0x258ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FF0u;
        // 0x258ff4: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ff0) {
            ctx->pc = 0x259000u;
            goto label_259000;
        }
    }
    ctx->pc = 0x258FF8u;
    // 0x258ff8: 0xac62f9ec  sw          $v0, -0x614($v1)
    ctx->pc = 0x258ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965740), GPR_U32(ctx, 2));
    // 0x258ffc: 0x0  nop
    ctx->pc = 0x258ffcu;
    // NOP
label_259000:
    // 0x259000: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x259000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x259004: 0x8c62f9e8  lw          $v0, -0x618($v1)
    ctx->pc = 0x259004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965736)));
    // 0x259008: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x259008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x25900c: 0x2c4200e1  sltiu       $v0, $v0, 0xE1
    ctx->pc = 0x25900cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)225) ? 1 : 0);
    // 0x259010: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x259010u;
    {
        const bool branch_taken_0x259010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259010) {
            ctx->pc = 0x259014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259010u;
            // 0x259014: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259028u;
            goto label_259028;
        }
    }
    ctx->pc = 0x259018u;
    // 0x259018: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x259018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x25901c: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x25901Cu;
    SET_GPR_U32(ctx, 31, 0x259024u);
    ctx->pc = 0x259020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25901Cu;
    // 0x259020: 0x24846fc0  addiu       $a0, $a0, 0x6FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x25901Cu, 0x259024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259024u;
label_259024:
    // 0x259024: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x259024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
label_259028:
    // 0x259028: 0xc0933a0  jal         func_24CE80
    ctx->pc = 0x259028u;
    SET_GPR_U32(ctx, 31, 0x259030u);
    ctx->pc = 0x25902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259028u;
    // 0x25902c: 0x2484a208  addiu       $a0, $a0, -0x5DF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CE80u, 0x259028u, 0x259030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259030u;
label_259030:
    // 0x259030: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x259030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x259034: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x259034u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x259038: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x259038u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25903c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x25903cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259040: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x259040u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259044: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x259044u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259048: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x259048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25904c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25904cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x259050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259054: 0x8095828  j           func_2560A0
    ctx->pc = 0x259054u;
    ctx->pc = 0x259058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259054u;
    // 0x259058: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2560A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2560A0u, 0x259054u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x25905Cu;
    // 0x25905c: 0x0  nop
    ctx->pc = 0x25905cu;
    // NOP
    if (ctx->pc == 0x25905cu) { ctx->pc = 0x259060u; }
}
