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

// Function: sub_0028A120
// Address: 0x28a120 - 0x28a2f8
void sub_0028A120_0x28a120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A120_0x28a120");
#endif

    switch (ctx->pc) {
        case 0x28a178u: goto label_28a178;
        case 0x28a188u: goto label_28a188;
        case 0x28a19cu: goto label_28a19c;
        case 0x28a208u: goto label_28a208;
        case 0x28a2a8u: goto label_28a2a8;
        default: break;
    }

    ctx->pc = 0x28a120u;

    // 0x28a120: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28a120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28a124: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28a124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28a128: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28a128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28a12c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x28a12cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a130: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x28a130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x28a134: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28a134u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a138: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x28a138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x28a13c: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x28a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x28a140: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x28a140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x28a144: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x28a144u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a148: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28a148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28a14c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x28a14cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a150: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28a150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28a154: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x28a154u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a15c: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x28a15cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28a160: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28a160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x28a164: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28a164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a168: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x28a168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x28a16c: 0x1a800018  blez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x28A16Cu;
    {
        const bool branch_taken_0x28a16c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x28A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A16Cu;
        // 0x28a170: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a16c) {
            ctx->pc = 0x28A1D0u;
            goto label_28a1d0;
        }
    }
    ctx->pc = 0x28A174u;
    // 0x28a174: 0x2695ffff  addiu       $s5, $s4, -0x1
    ctx->pc = 0x28a174u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_28a178:
    // 0x28a178: 0xde640000  ld          $a0, 0x0($s3)
    ctx->pc = 0x28a178u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28a17c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x28a17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a180: 0xc048082  jal         func_120208
    ctx->pc = 0x28A180u;
    SET_GPR_U32(ctx, 31, 0x28A188u);
    ctx->pc = 0x28A184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A180u;
    // 0x28a184: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x28A180u, 0x28A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A188u;
label_28a188:
    // 0x28a188: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a18c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28a18cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a190: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x28a190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a194: 0xc0a2202  jal         func_288808
    ctx->pc = 0x28A194u;
    SET_GPR_U32(ctx, 31, 0x28A19Cu);
    ctx->pc = 0x28A198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A194u;
    // 0x28a198: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288808u, 0x28A194u, 0x28A19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A19Cu;
label_28a19c:
    // 0x28a19c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28a19cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28a1a0: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x28a1a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28a1a4: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x28a1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x28a1a8: 0x52902b  sltu        $s2, $v0, $s2
    ctx->pc = 0x28a1a8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x28a1ac: 0x214202a  slt         $a0, $s0, $s4
    ctx->pc = 0x28a1acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x28a1b0: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x28a1b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x28a1b4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x28a1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28a1b8: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x28a1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x28a1bc: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x28a1bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x28a1c0: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x28A1C0u;
    {
        const bool branch_taken_0x28a1c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A1C0u;
        // 0x28a1c4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a1c0) {
            ctx->pc = 0x28A178u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a178;
        }
    }
    ctx->pc = 0x28A1C8u;
    // 0x28a1c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28A1C8u;
    {
        const bool branch_taken_0x28a1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A1C8u;
        // 0x28a1cc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a1c8) {
            ctx->pc = 0x28A1D8u;
            goto label_28a1d8;
        }
    }
    ctx->pc = 0x28A1D0u;
label_28a1d0:
    // 0x28a1d0: 0x2695ffff  addiu       $s5, $s4, -0x1
    ctx->pc = 0x28a1d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28a1d4: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x28a1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28a1d8:
    // 0x28a1d8: 0x1640001f  bnez        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x28A1D8u;
    {
        const bool branch_taken_0x28a1d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A1D8u;
        // 0x28a1dc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a1d8) {
            ctx->pc = 0x28A258u;
            goto label_28a258;
        }
    }
    ctx->pc = 0x28A1E0u;
    // 0x28a1e0: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x28a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x28a1e4: 0x933021  addu        $a2, $a0, $s3
    ctx->pc = 0x28a1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x28a1e8: 0x962821  addu        $a1, $a0, $s6
    ctx->pc = 0x28a1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x28a1ec: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x28a1ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a1f0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x28a1f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28a1f4: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28A1F4u;
    {
        const bool branch_taken_0x28a1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28a1f4) {
            ctx->pc = 0x28A1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A1F4u;
            // 0x28a1f8: 0x931821  addu        $v1, $a0, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A240u;
            goto label_28a240;
        }
    }
    ctx->pc = 0x28A1FCu;
    // 0x28a1fc: 0x1a00000e  blez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x28A1FCu;
    {
        const bool branch_taken_0x28a1fc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A1FCu;
        // 0x28a200: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a1fc) {
            ctx->pc = 0x28A238u;
            goto label_28a238;
        }
    }
    ctx->pc = 0x28A204u;
    // 0x28a204: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28a204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28a208:
    // 0x28a208: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x28a208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x28a20c: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x28a20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x28a210: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x28a210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x28a214: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28A214u;
    {
        const bool branch_taken_0x28a214 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A214u;
        // 0x28a218: 0x24a5fff8  addiu       $a1, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a214) {
            ctx->pc = 0x28A234u;
            goto label_28a234;
        }
    }
    ctx->pc = 0x28A21Cu;
    // 0x28a21c: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x28a21cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a220: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x28a220u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28a224: 0x1062fff8  beq         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28A224u;
    {
        const bool branch_taken_0x28a224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A224u;
        // 0x28a228: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a224) {
            ctx->pc = 0x28A208u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a208;
        }
    }
    ctx->pc = 0x28A22Cu;
    // 0x28a22c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28A22Cu;
    {
        const bool branch_taken_0x28a22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A22Cu;
        // 0x28a230: 0x931821  addu        $v1, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a22c) {
            ctx->pc = 0x28A23Cu;
            goto label_28a23c;
        }
    }
    ctx->pc = 0x28A234u;
label_28a234:
    // 0x28a234: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x28a234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_28a238:
    // 0x28a238: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x28a238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_28a23c:
    // 0x28a23c: 0x962821  addu        $a1, $a0, $s6
    ctx->pc = 0x28a23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_28a240:
    // 0x28a240: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x28a240u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a244: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x28a244u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28a248: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x28a248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x28a24c: 0x38520001  xori        $s2, $v0, 0x1
    ctx->pc = 0x28a24cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x28a250: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x28A250u;
    {
        const bool branch_taken_0x28a250 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A250u;
        // 0x28a254: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a250) {
            ctx->pc = 0x28A294u;
            goto label_28a294;
        }
    }
    ctx->pc = 0x28A258u;
label_28a258:
    // 0x28a258: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28a258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a25c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x28a25cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a260: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x28a260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a264: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28a264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28a268: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x28a268u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28a26c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x28a26cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a270: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x28a270u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a274: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28a274u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a278: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28a278u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a27c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28a27cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a280: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28a280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a284: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28a284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a28c: 0x80a247e  j           func_2891F8
    ctx->pc = 0x28A28Cu;
    ctx->pc = 0x28A290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A28Cu;
    // 0x28a290: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2891F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2891F8u, 0x28A28Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28A294u;
label_28a294:
    // 0x28a294: 0x1a80000b  blez        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x28A294u;
    {
        const bool branch_taken_0x28a294 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x28A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A294u;
        // 0x28a298: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a294) {
            ctx->pc = 0x28A2C4u;
            goto label_28a2c4;
        }
    }
    ctx->pc = 0x28A29Cu;
    // 0x28a29c: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x28a29cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2a4: 0x0  nop
    ctx->pc = 0x28a2a4u;
    // NOP
label_28a2a8:
    // 0x28a2a8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x28a2a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28a2ac: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x28a2acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x28a2b0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x28a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x28a2b4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x28a2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x28a2b8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x28a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x28a2bc: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28A2BCu;
    {
        const bool branch_taken_0x28a2bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a2bc) {
            ctx->pc = 0x28A2A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a2a8;
        }
    }
    ctx->pc = 0x28A2C4u;
label_28a2c4:
    // 0x28a2c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28a2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28a2c8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x28a2c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28a2cc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x28a2ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a2d0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x28a2d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a2d4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28a2d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a2d8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28a2d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a2dc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28a2dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a2e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28a2e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a2e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28a2e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a2e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a2e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x28A2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A2ECu;
        // 0x28a2f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A2F4u;
    // 0x28a2f4: 0x0  nop
    ctx->pc = 0x28a2f4u;
    // NOP
}
