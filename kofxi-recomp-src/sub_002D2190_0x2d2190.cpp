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

// Function: sub_002D2190
// Address: 0x2d2190 - 0x2d2390
void sub_002D2190_0x2d2190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2190_0x2d2190");
#endif

    switch (ctx->pc) {
        case 0x2d21f0u: goto label_2d21f0;
        case 0x2d2214u: goto label_2d2214;
        case 0x2d2228u: goto label_2d2228;
        case 0x2d225cu: goto label_2d225c;
        case 0x2d2274u: goto label_2d2274;
        case 0x2d2288u: goto label_2d2288;
        case 0x2d22a0u: goto label_2d22a0;
        case 0x2d22b8u: goto label_2d22b8;
        case 0x2d22c4u: goto label_2d22c4;
        case 0x2d22e4u: goto label_2d22e4;
        case 0x2d2304u: goto label_2d2304;
        case 0x2d2310u: goto label_2d2310;
        case 0x2d231cu: goto label_2d231c;
        case 0x2d232cu: goto label_2d232c;
        default: break;
    }

    ctx->pc = 0x2d2190u;

    // 0x2d2190: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d2190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d2194: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d2194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d2198: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d2198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d219c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d219cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d21a0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2d21a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d21a4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d21a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d21a8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2d21a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d21ac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d21acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2d21b0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2d21b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2d21b4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2d21b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d21b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d21b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d21bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d21bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d21c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d21c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d21c4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d21c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2d21c8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d21c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2d21cc: 0x8eb30004  lw          $s3, 0x4($s5)
    ctx->pc = 0x2d21ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2d21d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d21d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d21d4: 0x13b040  sll         $s6, $s3, 1
    ctx->pc = 0x2d21d4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2d21d8: 0x26c40003  addiu       $a0, $s6, 0x3
    ctx->pc = 0x2d21d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 3));
    // 0x2d21dc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2d21dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d21e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D21E0u;
    {
        const bool branch_taken_0x2d21e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21E0u;
        // 0x2d21e4: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21e0) {
            ctx->pc = 0x2D21F8u;
            goto label_2d21f8;
        }
    }
    ctx->pc = 0x2D21E8u;
    // 0x2d21e8: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D21E8u;
    SET_GPR_U32(ctx, 31, 0x2D21F0u);
    ctx->pc = 0x2D21ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D21E8u;
    // 0x2d21ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D19A8u, 0x2D21E8u, 0x2D21F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D21F0u;
label_2d21f0:
    // 0x2d21f0: 0x5440005b  bnel        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x2D21F0u;
    {
        const bool branch_taken_0x2d21f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d21f0) {
            ctx->pc = 0x2D21F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D21F0u;
            // 0x2d21f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2360u;
            goto label_2d2360;
        }
    }
    ctx->pc = 0x2D21F8u;
label_2d21f8:
    // 0x2d21f8: 0x8e570008  lw          $s7, 0x8($s2)
    ctx->pc = 0x2d21f8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d21fc: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x2d21fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2d2200: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x2d2200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x2d2204: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d2204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2208: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d2208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d220c: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D220Cu;
    SET_GPR_U32(ctx, 31, 0x2D2214u);
    ctx->pc = 0x2D2210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D220Cu;
    // 0x2d2210: 0x2614ffff  addiu       $s4, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2D220Cu, 0x2D2214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2214u;
label_2d2214:
    // 0x2d2214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2218: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2d2218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2d221c: 0x1a800012  blez        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D221Cu;
    {
        const bool branch_taken_0x2d221c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2D2220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D221Cu;
        // 0x2d2220: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d221c) {
            ctx->pc = 0x2D2268u;
            goto label_2d2268;
        }
    }
    ctx->pc = 0x2D2224u;
    // 0x2d2224: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2d2224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d2228:
    // 0x2d2228: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2d2228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2d222c: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x2d222cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d2230: 0x104840  sll         $t1, $s0, 1
    ctx->pc = 0x2d2230u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d2234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d2234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2238: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x2d2238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d223c: 0xf03823  subu        $a3, $a3, $s0
    ctx->pc = 0x2d223cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x2d2240: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2d2240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2244: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x2d2244u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2248: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2d2248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2d224c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2d224cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2d2250: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d2250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2254: 0xc0b5264  jal         func_2D4990
    ctx->pc = 0x2D2254u;
    SET_GPR_U32(ctx, 31, 0x2D225Cu);
    ctx->pc = 0x2D2258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2254u;
    // 0x2d2258: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4990u, 0x2D2254u, 0x2D225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D225Cu;
label_2d225c:
    // 0x2d225c: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x2d225cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2d2260: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2D2260u;
    {
        const bool branch_taken_0x2d2260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2260) {
            ctx->pc = 0x2D2264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2260u;
            // 0x2d2264: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2228;
        }
    }
    ctx->pc = 0x2D2268u;
label_2d2268:
    // 0x2d2268: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d2268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d226c: 0xc0b51ce  jal         func_2D4738
    ctx->pc = 0x2D226Cu;
    SET_GPR_U32(ctx, 31, 0x2D2274u);
    ctx->pc = 0x2D2270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D226Cu;
    // 0x2d2270: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4738u, 0x2D226Cu, 0x2D2274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2274u;
label_2d2274:
    // 0x2d2274: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D2274u;
    {
        const bool branch_taken_0x2d2274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2274) {
            ctx->pc = 0x2D2278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2274u;
            // 0x2d2278: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2360u;
            goto label_2d2360;
        }
    }
    ctx->pc = 0x2D227Cu;
    // 0x2d227c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d227cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2280: 0xc0b511c  jal         func_2D4470
    ctx->pc = 0x2D2280u;
    SET_GPR_U32(ctx, 31, 0x2D2288u);
    ctx->pc = 0x2D2284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2280u;
    // 0x2d2284: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4470u, 0x2D2280u, 0x2D2288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2288u;
label_2d2288:
    // 0x2d2288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d228c: 0x56000034  bnel        $s0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x2D228Cu;
    {
        const bool branch_taken_0x2d228c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d228c) {
            ctx->pc = 0x2D2290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D228Cu;
            // 0x2d2290: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2360u;
            goto label_2d2360;
        }
    }
    ctx->pc = 0x2D2294u;
    // 0x2d2294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2298: 0xc0b52dc  jal         func_2D4B70
    ctx->pc = 0x2D2298u;
    SET_GPR_U32(ctx, 31, 0x2D22A0u);
    ctx->pc = 0x2D229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2298u;
    // 0x2d229c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4B70u, 0x2D2298u, 0x2D22A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D22A0u;
label_2d22a0:
    // 0x2d22a0: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x2d22a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2d22a4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D22A4u;
    {
        const bool branch_taken_0x2d22a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22A4u;
        // 0x2d22a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d22a4) {
            ctx->pc = 0x2D22F0u;
            goto label_2d22f0;
        }
    }
    ctx->pc = 0x2D22ACu;
    // 0x2d22ac: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x2d22acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d22b0: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x2d22b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d22b4: 0x0  nop
    ctx->pc = 0x2d22b4u;
    // NOP
label_2d22b8:
    // 0x2d22b8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2d22b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2d22bc: 0xc048082  jal         func_120208
    ctx->pc = 0x2D22BCu;
    SET_GPR_U32(ctx, 31, 0x2D22C4u);
    ctx->pc = 0x2D22C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D22BCu;
    // 0x2d22c0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x2D22BCu, 0x2D22C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D22C4u;
label_2d22c4:
    // 0x2d22c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d22c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d22c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d22c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d22cc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2d22ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d22d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d22d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d22d4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d22d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d22d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d22d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d22dc: 0xc0b5264  jal         func_2D4990
    ctx->pc = 0x2D22DCu;
    SET_GPR_U32(ctx, 31, 0x2D22E4u);
    ctx->pc = 0x2D22E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D22DCu;
    // 0x2d22e0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4990u, 0x2D22DCu, 0x2D22E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D22E4u;
label_2d22e4:
    // 0x2d22e4: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x2d22e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2d22e8: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2D22E8u;
    {
        const bool branch_taken_0x2d22e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d22e8) {
            ctx->pc = 0x2D22ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D22E8u;
            // 0x2d22ec: 0xde240000  ld          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D22B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d22b8;
        }
    }
    ctx->pc = 0x2D22F0u;
label_2d22f0:
    // 0x2d22f0: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x2d22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2d22f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d22f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d22f8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2d22f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2d22fc: 0xc0b517a  jal         func_2D45E8
    ctx->pc = 0x2D22FCu;
    SET_GPR_U32(ctx, 31, 0x2D2304u);
    ctx->pc = 0x2D2300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D22FCu;
    // 0x2d2300: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D45E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D45E8u, 0x2D22FCu, 0x2D2304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2304u;
label_2d2304:
    // 0x2d2304: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d2304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2308: 0xc0b51ce  jal         func_2D4738
    ctx->pc = 0x2D2308u;
    SET_GPR_U32(ctx, 31, 0x2D2310u);
    ctx->pc = 0x2D230Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2308u;
    // 0x2d230c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4738u, 0x2D2308u, 0x2D2310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2310u;
label_2d2310:
    // 0x2d2310: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d2310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2314: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D2314u;
    SET_GPR_U32(ctx, 31, 0x2D231Cu);
    ctx->pc = 0x2D2318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2314u;
    // 0x2d2318: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2D2314u, 0x2D231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D231Cu;
label_2d231c:
    // 0x2d231c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D231Cu;
    {
        const bool branch_taken_0x2d231c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D2320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D231Cu;
        // 0x2d2320: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d231c) {
            ctx->pc = 0x2D2340u;
            goto label_2d2340;
        }
    }
    ctx->pc = 0x2D2324u;
    // 0x2d2324: 0xc0b5016  jal         func_2D4058
    ctx->pc = 0x2D2324u;
    SET_GPR_U32(ctx, 31, 0x2D232Cu);
    ctx->pc = 0x2D2328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2324u;
    // 0x2d2328: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4058u, 0x2D2324u, 0x2D232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D232Cu;
label_2d232c:
    // 0x2d232c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D232Cu;
    {
        const bool branch_taken_0x2d232c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D232Cu;
        // 0x2d2330: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d232c) {
            ctx->pc = 0x2D2358u;
            goto label_2d2358;
        }
    }
    ctx->pc = 0x2D2334u;
    // 0x2d2334: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D2334u;
    {
        const bool branch_taken_0x2d2334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2334u;
        // 0x2d2338: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2334) {
            ctx->pc = 0x2D2364u;
            goto label_2d2364;
        }
    }
    ctx->pc = 0x2D233Cu;
    // 0x2d233c: 0x0  nop
    ctx->pc = 0x2d233cu;
    // NOP
label_2d2340:
    // 0x2d2340: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2340u;
    {
        const bool branch_taken_0x2d2340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2340u;
        // 0x2d2344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2340) {
            ctx->pc = 0x2D235Cu;
            goto label_2d235c;
        }
    }
    ctx->pc = 0x2D2348u;
    // 0x2d2348: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2d2348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d234c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2350: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x2d2350u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x2d2354: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2d2354u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_2d2358:
    // 0x2d2358: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d2358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d235c:
    // 0x2d235c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d235cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d2360:
    // 0x2d2360: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d2360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d2364:
    // 0x2d2364: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d2364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2368: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d2368u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d236c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d236cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2370: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d2370u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d2374: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d2374u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2378: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d2378u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d237c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2d237cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2380: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d2380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2384: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2384u;
        // 0x2d2388: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D238Cu;
    // 0x2d238c: 0x0  nop
    ctx->pc = 0x2d238cu;
    // NOP
    if (ctx->pc == 0x2d238cu) { ctx->pc = 0x2d2390u; }
}
