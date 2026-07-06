#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F66C0
// Address: 0x2f66c0 - 0x2f6790
void sub_002F66C0_0x2f66c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F66C0_0x2f66c0");
#endif

    switch (ctx->pc) {
        case 0x2f670cu: goto label_2f670c;
        case 0x2f6728u: goto label_2f6728;
        case 0x2f6740u: goto label_2f6740;
        case 0x2f6754u: goto label_2f6754;
        case 0x2f676cu: goto label_2f676c;
        default: break;
    }

    ctx->pc = 0x2f66c0u;

    // 0x2f66c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2f66c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2f66c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f66c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f66c8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f66c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f66cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f66ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f66d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f66d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f66d4: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x2f66d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f66d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f66d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f66dc: 0x27b20098  addiu       $s2, $sp, 0x98
    ctx->pc = 0x2f66dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2f66e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f66e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f66e4: 0xffa50098  sd          $a1, 0x98($sp)
    ctx->pc = 0x2f66e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 5));
    // 0x2f66e8: 0xffa600a0  sd          $a2, 0xA0($sp)
    ctx->pc = 0x2f66e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 6));
    // 0x2f66ec: 0xffa700a8  sd          $a3, 0xA8($sp)
    ctx->pc = 0x2f66ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 7));
    // 0x2f66f0: 0xffa800b0  sd          $t0, 0xB0($sp)
    ctx->pc = 0x2f66f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 8));
    // 0x2f66f4: 0xffa900b8  sd          $t1, 0xB8($sp)
    ctx->pc = 0x2f66f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 9));
    // 0x2f66f8: 0xffaa00c0  sd          $t2, 0xC0($sp)
    ctx->pc = 0x2f66f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 10));
    // 0x2f66fc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F66FCu;
    {
        const bool branch_taken_0x2f66fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F66FCu;
            // 0x2f6700: 0xffab00c8  sd          $t3, 0xC8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f66fc) {
            ctx->pc = 0x2F6720u;
            goto label_2f6720;
        }
    }
    ctx->pc = 0x2F6704u;
    // 0x2f6704: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F6704u;
    SET_GPR_U32(ctx, 31, 0x2F670Cu);
    ctx->pc = 0x2F6510u;
    if (runtime->hasFunction(0x2F6510u)) {
        auto targetFn = runtime->lookupFunction(0x2F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F670Cu; }
        if (ctx->pc != 0x2F670Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6510_0x2f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F670Cu; }
        if (ctx->pc != 0x2F670Cu) { return; }
    }
    ctx->pc = 0x2F670Cu;
label_2f670c:
    // 0x2f670c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f670cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6710: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6710u;
    {
        const bool branch_taken_0x2f6710 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6710u;
            // 0x2f6714: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6710) {
            ctx->pc = 0x2F672Cu;
            goto label_2f672c;
        }
    }
    ctx->pc = 0x2F6718u;
    // 0x2f6718: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2F6718u;
    {
        const bool branch_taken_0x2f6718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F671Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6718u;
            // 0x2f671c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6718) {
            ctx->pc = 0x2F6770u;
            goto label_2f6770;
        }
    }
    ctx->pc = 0x2F6720u;
label_2f6720:
    // 0x2f6720: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f6720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6724: 0x0  nop
    ctx->pc = 0x2f6724u;
    // NOP
label_2f6728:
    // 0x2f6728: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2f6728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2f672c:
    // 0x2f672c: 0x8e45fff8  lw          $a1, -0x8($s2)
    ctx->pc = 0x2f672cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967288)));
    // 0x2f6730: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F6730u;
    {
        const bool branch_taken_0x2f6730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6730) {
            ctx->pc = 0x2F6754u;
            goto label_2f6754;
        }
    }
    ctx->pc = 0x2F6738u;
    // 0x2f6738: 0xc0bd97e  jal         func_2F65F8
    ctx->pc = 0x2F6738u;
    SET_GPR_U32(ctx, 31, 0x2F6740u);
    ctx->pc = 0x2F673Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6738u;
            // 0x2f673c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F65F8u;
    if (runtime->hasFunction(0x2F65F8u)) {
        auto targetFn = runtime->lookupFunction(0x2F65F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6740u; }
        if (ctx->pc != 0x2F6740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F65F8_0x2f65f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6740u; }
        if (ctx->pc != 0x2F6740u) { return; }
    }
    ctx->pc = 0x2F6740u;
label_2f6740:
    // 0x2f6740: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f6740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6744: 0x5620fff8  bnel        $s1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F6744u;
    {
        const bool branch_taken_0x2f6744 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6744) {
            ctx->pc = 0x2F6748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6744u;
            // 0x2f6748: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6728;
        }
    }
    ctx->pc = 0x2F674Cu;
    // 0x2f674c: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F674Cu;
    SET_GPR_U32(ctx, 31, 0x2F6754u);
    ctx->pc = 0x2F6750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F674Cu;
            // 0x2f6750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6754u; }
        if (ctx->pc != 0x2F6754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6754u; }
        if (ctx->pc != 0x2F6754u) { return; }
    }
    ctx->pc = 0x2F6754u;
label_2f6754:
    // 0x2f6754: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6754u;
    {
        const bool branch_taken_0x2f6754 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6754u;
            // 0x2f6758: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6754) {
            ctx->pc = 0x2F6770u;
            goto label_2f6770;
        }
    }
    ctx->pc = 0x2F675Cu;
    // 0x2f675c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F675Cu;
    {
        const bool branch_taken_0x2f675c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F675Cu;
            // 0x2f6760: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f675c) {
            ctx->pc = 0x2F6774u;
            goto label_2f6774;
        }
    }
    ctx->pc = 0x2F6764u;
    // 0x2f6764: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F6764u;
    SET_GPR_U32(ctx, 31, 0x2F676Cu);
    ctx->pc = 0x2F6768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6764u;
            // 0x2f6768: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F676Cu; }
        if (ctx->pc != 0x2F676Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F676Cu; }
        if (ctx->pc != 0x2F676Cu) { return; }
    }
    ctx->pc = 0x2F676Cu;
label_2f676c:
    // 0x2f676c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f676cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f6770:
    // 0x2f6770: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f6770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f6774:
    // 0x2f6774: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f6774u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6778: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f6778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f677c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f677cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f6780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6784: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6784u;
            // 0x2f6788: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F678Cu;
    // 0x2f678c: 0x0  nop
    ctx->pc = 0x2f678cu;
    // NOP
    ctx->pc = 0x2f6790u;
}
